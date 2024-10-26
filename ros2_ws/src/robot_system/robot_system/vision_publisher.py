import rclpy
from rclpy.node import Node

from robot_interfaces.msg import VisionData


class VisionDataPublisher(Node):

    def __init__(self):
        super().__init__('vision_publisher')
        self.publisher_ = self.create_publisher(VisionData, 'topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.itemsdetected = ['person','bike','chair']
        self.distances = [1.03,1.62,3.59]

    def timer_callback(self):
        visiondata = VisionData()
        visiondata.ai_detect_array = self.itemsdetected
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
