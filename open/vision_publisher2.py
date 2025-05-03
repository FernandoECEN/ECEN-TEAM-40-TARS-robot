# Importing necessary libraries for ROS2, OpenCV, and numpy
import rclpy
from rclpy.node import Node
import numpy as np
import cv2 as cv
from rectify import file2map
import airead

# Importing the VisionData message type from a custom robot interface package
from urobot_interfaces.msg import VisionData
from urobot_interfaces.msg import StereoImages

# Define a class that will publish VisionData messages
class VisionDataPublisher(Node):
    
    def __init__(self):
        # Initialize the node with the name 'vision_publisher'
        super().__init__('vision_publisher')
        
        # Create a publisher for the VisionData message on the 'vision_topic' topic
        self.publisher_ = self.create_publisher(VisionData, 'vision_topic', 1)
        
        self.subscriber_ = self.create_subscription(StereoImages, 'image_topic', self.timer_callback, 1)
        
        # Timer to trigger the timer_callback every 0.5 seconds
        # timer_period = 0.1  # seconds
        # self.timer = self.create_timer(timer_period, self.timer_callback)
        
        # List of items detected by the vision system
        self.itemsdetected = []
        
        # List of distances to each detected item (initially set to dummy values)
        self.distances = []
        
        # Retrieve rectification maps and stereo calibration parameters
        self.rmap1x, self.rmap1y, self.rmap2x, self.rmap2y, self.Q = file2map('camera_parameters', (10000, 2200))
        
        # Stereo vision parameters for disparity map calculation
        self.minDisparity = 9
        self.numDisparities = 4 * 16  # Number of disparities for stereo matching
        
        # Create a stereo block matching object for disparity calculation
        self.stereo = cv.StereoBM.create()
        
        # Configure the stereo block matching parameters
        self.stereo.setNumDisparities(self.numDisparities)
        self.stereo.setBlockSize(1 * 2 + 5)
        self.stereo.setPreFilterType(0)
        self.stereo.setPreFilterSize(25 * 2 + 5)
        self.stereo.setPreFilterCap(62)
        self.stereo.setTextureThreshold(100)
        self.stereo.setUniquenessRatio(100)
        self.stereo.setSpeckleRange(100)
        self.stereo.setSpeckleWindowSize(25 * 2)
        self.stereo.setDisp12MaxDiff(25)
        self.stereo.setMinDisparity(self.minDisparity)
        
        self.lastmodtime = None
        
    def timer_callback(self, msg):
        # Capture images from both cameras (left and right)
        shape = msg.shape
        
        im1array = np.array(msg.cam1_image)
        rectified_left = np.reshape(im1array, (shape[0],shape[1]))
        im2array = np.array(msg.cam2_image)
        rectified_right = np.reshape(im2array, (shape[0],shape[1]))
        
        # Compute the disparity map between the left and right images
        disparity = self.stereo.compute(rectified_left, rectified_right)
        
        # Convert the disparity map to a float type for further processing
        disparity = disparity.astype(np.float32)

        # Scale the disparity values by dividing by 16.0 (standard scaling factor for OpenCV disparity maps)
        disparity = disparity / 16.0
        
        # Reproject the disparity map to 3D space (generating 3D point cloud)
        proj = cv.reprojectImageTo3D(disparity, self.Q)
        
        # Find the index of the maximum disparity value (the point closest to the camera)
        imax = np.unravel_index(disparity.argmax(), disparity.shape)
        
        # Extract the distance value of the closest point (Z-coordinate in 3D space)
        self.distances = [proj[imax[0]][imax[1]][2] / 10]  # Convert to meters\
        
        # Create a new VisionData message and populate it with detected items and distances
        visiondata = VisionData()
        
        self.itemsdetected, self.lastmodtime = airead.check_ai("yolo-Data/yolo-Data.csv", self.lastmodtime, self.itemsdetected)
        
        if not self.itemsdetected:
            self.itemsdetected = ['None']
        
        # List of detected items
        visiondata.ai_detect_array = self.itemsdetected
        
        # Log the distances (for debugging purposes)
        self.get_logger().info(f'Distances: {self.distances}')
        
        # Add the calculated distances to the message
        visiondata.distance_array = self.distances
        
        # Publish the VisionData message to the topic 'vision_topic'
        self.publisher_.publish(visiondata)
        
        # Log the data that is being published
        self.get_logger().info(f'Publishing: {visiondata}')

# Main function that initializes the ROS2 system and starts the VisionDataPublisher node
def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system

    # Create and spin the VisionDataPublisher node
    vision_publisher = VisionDataPublisher()
    rclpy.spin(vision_publisher)  # Keep the node running and processing callbacks

    # Destroy the node explicitly (optional, as it's done automatically by ROS2 shutdown)
    vision_publisher.destroy_node()
    
    # Shutdown ROS2 when done
    rclpy.shutdown()

# Entry point of the program
if __name__ == '__main__':
    main()
