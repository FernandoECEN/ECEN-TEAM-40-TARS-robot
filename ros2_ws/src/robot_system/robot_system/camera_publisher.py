import rclpy
import cv2
import numpy as np
from rclpy.node import Node

from robot_interfaces.msg import StereoImages


class ImagePublisher(Node):

    def __init__(self):
        super().__init__('image_publisher')
        self.publisher_ = self.create_publisher(StereoImages, 'image_topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.cam1 = cv2.VideoCapture(0)
        
    def listener_callback(self, msg):
        self.get_logger().info(f'I heard: {msg.feedback1} {msg.feedback2}')

    def timer_callback(self):
        ret, frame = self.cam1.read()
        imagearray2d = np.array(frame)
        shape = np.array(np.shape(imagearray2d))
        imagearray1d = np.reshape(imagearray2d,(shape[0]*shape[1]*shape[2]))
        
        stereoimages = StereoImages()
        stereoimages.shape = shape
        stereoimages.cam1_image = imagearray1d
        
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
