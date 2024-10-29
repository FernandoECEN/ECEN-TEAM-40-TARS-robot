import rclpy
from rclpy.node import Node
import numpy as np
import cv2

from robot_interfaces.msg import VisionData
from robot_interfaces.msg import StereoImages


class VisionDataPublisher(Node):

    def __init__(self):
        super().__init__('vision_publisher')
        self.publisher_ = self.create_publisher(VisionData, 'vision_topic', 10)
        self.subscription = self.create_subscription(StereoImages,'image_topic',self.listener_callback,10)
        self.itemsdetected = ['person','bike','chair']
        self.distances = [1.03,1.62,3.59]
        self.debugmode = False
        
    def listener_callback(self, msg):
        shape = msg.shape
        
        im1array = np.array(msg.cam1_image)
        im1 = np.reshape(im1array, (shape[0],shape[1],shape[2]))
        im2array = np.array(msg.cam2_image)
        im2 = np.reshape(im2array, (shape[0],shape[1],shape[2]))
        
        im1 = cv2.cvtColor(im1, cv2.COLOR_BGR2GRAY)
        im2 = cv2.cvtColor(im2, cv2.COLOR_BGR2GRAY)
        
        # cv2.imshow("image", im1)
        
        # cv2.waitKey(0)
        # cv2.destroyWindow("image")
        if self.debugmode is False:
            minDisparity = 1
            numDisparities = 3*16
            
            stereo = cv2.StereoBM.create()
            
            stereo.setNumDisparities(numDisparities)
            stereo.setBlockSize(10*2+5)
            stereo.setPreFilterType(1)
            stereo.setPreFilterSize(8*2+5)
            stereo.setPreFilterCap(54)
            stereo.setTextureThreshold(38)
            stereo.setUniquenessRatio(19)
            stereo.setSpeckleRange(69)
            stereo.setSpeckleWindowSize(23*2)
            stereo.setDisp12MaxDiff(17)
            stereo.setMinDisparity(minDisparity)
            
            disparity = stereo.compute(im1, im2)
            
            disparity = disparity.astype(np.float32)

            # Scaling down the disparity values and normalizing them
            disparity = disparity / 16.0
            
            disparity = (disparity - minDisparity) / numDisparities
            
            cv2.imshow("disparity", disparity)

            cv2.waitKey(0)
            cv2.destroyWindow("disparity")
            
        elif self.debugmode is True:
            def nothing(x):
                pass
            
            cv2.namedWindow('disp', cv2.WINDOW_GUI_EXPANDED)
            cv2.resizeWindow('disp', 600, 800)

            cv2.createTrackbar('image', 'disp', 1, 3, nothing)
            cv2.createTrackbar('numDisparities', 'disp', 9, 17, nothing)
            cv2.createTrackbar('blockSize', 'disp', 16, 50, nothing)
            cv2.createTrackbar('preFilterType', 'disp', 1, 1, nothing)
            cv2.createTrackbar('preFilterSize', 'disp', 2, 25, nothing)
            cv2.createTrackbar('preFilterCap', 'disp', 5, 62, nothing)
            cv2.createTrackbar('textureThreshold', 'disp', 10, 100, nothing)
            cv2.createTrackbar('uniquenessRatio', 'disp', 32, 100, nothing)
            cv2.createTrackbar('speckleRange', 'disp', 0, 100, nothing)
            cv2.createTrackbar('speckleWindowSize', 'disp', 3, 25, nothing)
            cv2.createTrackbar('disp12MaxDiff', 'disp', 5, 25, nothing)
            cv2.createTrackbar('minDisparity', 'disp', 5, 25, nothing)

            # Create the image matching system
            stereo = cv2.StereoBM.create()
            
            while True:

                # Get the values from each slider
                imagen = cv2.getTrackbarPos('image', 'disp')

                numDisparities = cv2.getTrackbarPos('numDisparities', 'disp') * 16
                blockSize = cv2.getTrackbarPos('blockSize', 'disp') * 2 + 5
                preFilterType = cv2.getTrackbarPos('preFilterType', 'disp')
                preFilterSize = cv2.getTrackbarPos('preFilterSize', 'disp') * 2 + 5
                preFilterCap = cv2.getTrackbarPos('preFilterCap', 'disp')
                textureThreshold = cv2.getTrackbarPos('textureThreshold', 'disp')
                uniquenessRatio = cv2.getTrackbarPos('uniquenessRatio', 'disp')
                speckleRange = cv2.getTrackbarPos('speckleRange', 'disp')
                speckleWindowSize = cv2.getTrackbarPos('speckleWindowSize', 'disp') * 2
                disp12MaxDiff = cv2.getTrackbarPos('disp12MaxDiff', 'disp')
                minDisparity = cv2.getTrackbarPos('minDisparity', 'disp')

                # Setting the updated parameters before computing disparity map
                stereo.setNumDisparities(numDisparities)
                stereo.setBlockSize(blockSize)
                stereo.setPreFilterType(preFilterType)
                stereo.setPreFilterSize(preFilterSize)
                stereo.setPreFilterCap(preFilterCap)
                stereo.setTextureThreshold(textureThreshold)
                stereo.setUniquenessRatio(uniquenessRatio)
                stereo.setSpeckleRange(speckleRange)
                stereo.setSpeckleWindowSize(speckleWindowSize)
                stereo.setDisp12MaxDiff(disp12MaxDiff)
                stereo.setMinDisparity(minDisparity)

                # Compute the disparity map
                disparity = stereo.compute(im1, im2)

                disparity = disparity.astype(np.float32)

                # Scaling down the disparity values and normalizing them
                disparity = disparity / 16.0

                # Display the color disparity map
                disparity2 = (disparity - minDisparity) / numDisparities
                
                if imagen == 0:
                    imshow = im1
                elif imagen == 1:
                    imshow = im2
                else: imshow = disparity2

                cv2.imshow("disp", imshow)

                # Close window using esc key
                if cv2.waitKey(1) == 27:
                    break
        
        self.distances = [float(disparity[100][100]),float(disparity[333][30]),float(disparity[100][200])]
        
        visiondata = VisionData()
        
        visiondata.ai_detect_array = self.itemsdetected
        self.get_logger().info(f'Distances: {self.distances}')
        visiondata.distance_array = self.distances
        self.publisher_.publish(visiondata)
        self.get_logger().info(f'Publishing: {visiondata}')


def main(args=None):
    rclpy.init(args=args)

    vision_publisher = VisionDataPublisher()

    rclpy.spin(vision_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    vision_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
