import rclpy
from rclpy.node import Node

from robot_interfaces.msg import ControllerCommand


class ControllerPublisher(Node):

    def __init__(self):
        super().__init__('controller_publisher')
        self.publisher_ = self.create_publisher(ControllerCommand, 'controller_topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        usercommand = input('Input in format \"ID Direction Speed\": ')
        commandarray = usercommand.split()
        controllercommands = ControllerCommand()
        
        try:
            controllercommands.motor_id = int(commandarray[0])
            controllercommands.motor_direction = int(commandarray[1])
            controllercommands.motor_speed = int(commandarray[2])
            self.publisher_.publish(controllercommands)
            self.get_logger().info(f'Publishing: {controllercommands}')
        except Exception as e:
            self.get_logger().info(f'Exception Occured: {e}')


def main(args=None):
    rclpy.init(args=args)

    controller_publisher = ControllerPublisher()

    rclpy.spin(controller_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    controller_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
