# Import the necessary ROS2 libraries for Python
import rclpy
from rclpy.node import Node

# Import the custom message type defined in the 'robot_interfaces' package
from urobot_interfaces.msg import ControllerCommand


# Define the ControllerPublisher class which inherits from Node
class ControllerPublisher(Node):

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
        # Prompt the user to input the motor control command in the format "ID Direction Speed"
        usercommand = input('Input in format \"ID Direction Speed\": ')
        
        # Split the user input into a list of strings
        commandarray = usercommand.split()
        
        # Check for allowed bounds and set if needed
        if int(commandarray[1]) > 1: commandarray[1] = 1
        if int(commandarray[1]) < -1: commandarray[1] = -1
        
        # Create a new ControllerCommand message object
        controllercommands = ControllerCommand()
        
        try:
            # Parse the user input and assign the values to the controllercommands object
            # Convert input to integer and assign to respective fields in ControllerCommand
            controllercommands.motor_id = int(commandarray[0])       # Motor ID
            controllercommands.motor_direction = int(commandarray[1]) # Motor Direction
            controllercommands.motor_speed = int(commandarray[2])     # Motor Speed

            # Publish the ControllerCommand message
            self.publisher_.publish(controllercommands)

            # Log the message that is being published
            self.get_logger().info(f'Publishing: {controllercommands}')
        except Exception as e:
            # In case of an error (e.g., invalid input), log the exception
            self.get_logger().info(f'Exception Occured: {e}')


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
