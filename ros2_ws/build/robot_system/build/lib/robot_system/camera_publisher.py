import rclpy
import cv2
import numpy as np
from rclpy.node import Node

from robot_interfaces.msg import StereoImages


class ImagePublisher(Node):

    def __init__(self):
        super().__init__('image_publisher')
        self.publisher_ = self.create_publisher(StereoImages, 'image_topic', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        #self.cam1 = cv2.VideoCapture(0)
        
    def listener_callback(self, msg):
        self.get_logger().info(f'I heard: {msg.feedback1} {msg.feedback2}')

    def timer_callback(self):
        #ret, frame = self.cam1.read()
        frame1 = cv2.imread('/home/drymer/Bicycle1-perfect/im0.png')
        frame2 = cv2.imread('/home/drymer/Bicycle1-perfect/im1.png')
        
        newsize = (598,402)
        frame1 = cv2.resize(frame1, newsize, interpolation= cv2.INTER_LINEAR)
        frame2 = cv2.resize(frame2, newsize, interpolation= cv2.INTER_LINEAR)
        
        image1array2d = np.array(frame1)
        shape = np.array(np.shape(image1array2d))
        self.get_logger().info(f'Shape = {shape}')
        image1array1d = np.reshape(image1array2d,(shape[0]*shape[1]*shape[2]))
        
        image2array2d = np.array(frame2)
        image2array1d = np.reshape(image2array2d,(shape[0]*shape[1]*shape[2]))
        
        image1array1d = np.uint8(image1array1d)
        image2array1d = np.uint8(image2array1d)
        
        stereoimages = StereoImages()
        stereoimages.shape = shape.tolist()
        stereoimages.cam1_image = image1array1d.tolist()
        stereoimages.cam2_image = image2array1d.tolist()
        
        self.publisher_.publish(stereoimages)
        self.get_logger().info(f'Publishing Images')


def main(args=None):
    rclpy.init(args=args)

    image_publisher = ImagePublisher()

    rclpy.spin(image_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    image_publisher.cam1.release()
    image_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
