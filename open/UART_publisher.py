# Import the necessary ROS2 libraries for Python
import rclpy
from rclpy.node import Node

# Import the custom message type defined in the 'robot_interfaces' package
from robot_interfaces.msg import UARTOUT
from robot_interfaces.msg import UARTIN


# Define the ControllerPublisher class which inherits from Node
class UARTNODE(Node):

    def __init__(self):
        # Initialize the Node with the name 'controller_publisher'
        super().__init__('controller_publisher')

        # Create a publisher for the 'ControllerCommand' message type, which will publish to 'controller_topic'
        # The queue size is set to 10
        self.publisher_ = self.create_publisher(ControllerCommand, 'controller_topic', 10)

        # Define the period for the timer to call the timer_callback method (0.5 seconds)
        timer_period = 0.5  # seconds
        # Create a timer that triggers the timer_callback function every 0.5 seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    # Define the callback function that is triggered by the timer
    def timer_callback(self):
        print('test')


# Main function to initialize the ROS2 system, create the node, and spin it
def main(args=None):
    # Initialize the ROS2 Python client library (rclpy)
    rclpy.init(args=args)

    # Instantiate the ControllerPublisher node
    controller_publisher = ControllerPublisher()

    # Keep spinning the node (this keeps the program alive to receive messages and trigger callbacks)
    rclpy.spin(controller_publisher)

    # Clean up and shutdown ROS2 when done
    # Explicitly destroy the node (optional, as it will be destroyed automatically when the program ends)
    controller_publisher.destroy_node()
    # Shutdown ROS2
    rclpy.shutdown()


# If this file is executed directly, call the main function
if __name__ == '__main__':
    main()
