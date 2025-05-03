# Importing necessary ROS 2 and OpenCV packages
import rclpy
import cv2 as cv
import numpy as np
from rclpy.node import Node
import time
from rectify import file2map

from urobot_interfaces.msg import StereoImages  # Importing the custom message type for stereo images


# Creating a ROS 2 node class for publishing stereo images
class ImagePublisher(Node):

    def __init__(self):
        # Initializing the Node with the name 'image_publisher'
        super().__init__('image_publisher')
        
        # Creating a publisher that will publish messages of type StereoImages
        # The topic is named 'image_topic' and the queue size is 10
        self.publisher_ = self.create_publisher(StereoImages, 'image_topic', 1)
        
        # Setting up a timer that triggers every 0.1 seconds to call the timer_callback function
        timer_period = 0.1  # 0.1 seconds (10 Hz)
        self.timer = self.create_timer(timer_period, self.camera_publish)
        
        self.rmap1x, self.rmap1y, self.rmap2x, self.rmap2y, self.Q = file2map('camera_parameters', (10000, 2200))

        self.cam1 = cv.VideoCapture("nvarguscamerasrc sensor-id=0 ! video/x-raw(memory:NVMM),width=1920, height=1080,framerate=30/1, format=NV12 ! nvvidconv flip-method=2 ! queue max-size-buffers=1 leaky=downstream ! videoconvert ! video/x-raw,format=BGR ! appsink max-buffers=1 drop=True")  # Replace with actual camera URL or device index
        self.cam2 = cv.VideoCapture("nvarguscamerasrc sensor-id=1 ! video/x-raw(memory:NVMM),width=1920, height=1080,framerate=30/1, format=NV12 ! nvvidconv flip-method=2 ! queue max-size-buffers=1 leaky=downstream ! videoconvert ! video/x-raw,format=BGR ! appsink max-buffers=1 drop=True")  # Replace with actual camera URL or device index

    def camera_publish(self):
        # This callback gets triggered periodically based on the timer
        
        ret, imgL = self.cam1.read()  # Left camera image
        ret, imgR = self.cam2.read()  # Right camera image
        
        # imgL = cv.imread('frames_pair/camera0_0.png')
        # imgR = cv.imread('frames_pair/camera1_0.png')

        cv.imwrite('yolo-Data/yolo-Data.png', imgL)
        
        imgL = cv.cvtColor(imgL, cv.COLOR_BGR2GRAY)
        imgR = cv.cvtColor(imgR, cv.COLOR_BGR2GRAY)

        # Apply rectification to both images to correct for camera distortion
        rectified_left = cv.remap(imgL, self.rmap1x, self.rmap1y, cv.INTER_AREA)
        rectified_right = cv.remap(imgR, self.rmap2x, self.rmap2y, cv.INTER_AREA)
        
        # Resize rectified images to a smaller resolution (720x480)
        newsize = (720, 480)
        rectified_left = cv.resize(rectified_left, newsize, interpolation=cv.INTER_AREA)
        rectified_right = cv.resize(rectified_right, newsize, interpolation=cv.INTER_AREA)
        
        # Convert images from OpenCV format (H, W, C) to NumPy arrays
        image1array2d = np.array(rectified_left)
        shape = np.array(np.shape(image1array2d))  # Get the shape of the first image
        self.get_logger().info(f'Shape = {shape}')  # Log the shape of the image
        
        # Flattening the 2D image arrays into 1D arrays (to send over ROS topic)
        image1array1d = np.reshape(image1array2d, (shape[0] * shape[1]))
        
        image2array2d = np.array(rectified_right)  # Convert second image into NumPy array
        image2array1d = np.reshape(image2array2d, (shape[0] * shape[1]))
        
        # Ensure that the image arrays are in uint8 format (standard format for images)
        image1array1d = np.uint8(image1array1d)
        image2array1d = np.uint8(image2array1d)
        
        # Creating an instance of StereoImages (custom message type)
        stereoimages = StereoImages()
        
        # Setting the shape and pixel data for both left and right camera images
        stereoimages.shape = shape.tolist()  # Convert shape to list to make it serializable
        stereoimages.cam1_image = image1array1d.tolist()  # Left image data
        stereoimages.cam2_image = image2array1d.tolist()  # Right image data
        
        # Publishing the stereo images to the 'image_topic' topic
        self.publisher_.publish(stereoimages)
        self.get_logger().info(f'Publishing Images')  # Log the publication of images

    # def camera_callback(self):
    #     if self.cam1.isOpened() and self.cam2.isOpened():
    #         #call function
    #         response = self.camera_publish()
    #     else:
    #         self.get_logger().info(f'Camera disconnected')
    #         if not self.cam1.isOpened(): self.cam1.release()
    #         if not self.cam2.isOpened(): self.cam2.release()


# The main function to initialize and run the ROS 2 node
def main(args=None):
    # Initialize ROS 2
    rclpy.init(args=args)

    # Create an instance of the ImagePublisher node
    image_publisher = ImagePublisher()

    # Keep the node running, processing callbacks (timer_callback in this case)
    rclpy.spin(image_publisher)

    # Release the camera (if used) and destroy the node before shutdown
    # image_publisher.cam1.release()  # Uncomment if you're using a real camera
    image_publisher.destroy_node()
    rclpy.shutdown()  # Shut down ROS 2

# Check if this file is being executed as the main script
if __name__ == '__main__':
    main()  # Run the main function
