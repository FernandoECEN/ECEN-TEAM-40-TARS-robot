# Importing necessary libraries
import time
import serial

# ROS2 Python client library
import rclpy
from rclpy.node import Node

# Custom message type for motor control
from urobot_interfaces.msg import MotorControl

class MotorControlServer(Node):
    """
    A ROS2 Node that listens for motor control commands and sends corresponding
    commands to a motor controller via serial communication.
    """

    def __init__(self):
        super().__init__('motor_control_server')  # Initialize the node with a name
        # Subscribe to the 'motor_control' topic with the MotorControl message type
        self._action_server = self.create_subscription(
            MotorControl,
            'motor_control',
            self.motor_control_callback,
            10  # QoS queue size
        )
        
        # Create a timer that calls timer_callback every 0.1 seconds
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)

        # Initialize state variables
        self.commandstate = 0
        self.time = 0

        # Set up the serial connection to the motor controller
        self.serial_port = serial.Serial(
            port="/dev/ttyTHS1",      # Port to use
            baudrate=9600,            # Baud rate
            bytesize=serial.EIGHTBITS,
            parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE,
            timeout=0                 # Non-blocking mode
        )

    def motor_control_callback(self, msg):
        """
        Callback for motor_control topic.
        Updates the command state if conditions are met.
        """
        # Only update commandstate if both msg.motor_id and current state are < 4
        if not (msg.motor_id >= 4 and self.commandstate >= 4):
            self.commandstate = msg.motor_id
            self.get_logger().info(f'Setting state to {self.commandstate}')

    def timer_callback(self):
        """
        Timer callback that checks the command state and sends appropriate
        commands over the serial port.
        """
        if self.commandstate == 1:
            # Stop command
            self.get_logger().info('Sending:S')
            self.serial_port.write(b'S')
            self.commandstate = 10  # Stopped state

        elif self.commandstate == 2:
            # Forward command
            self.get_logger().info('Sending:F')
            self.serial_port.write(b'F')
            self.commandstate = 0  # Moving state

        elif self.commandstate == 3:
            # Reverse command
            self.get_logger().info('Sending:R')
            self.serial_port.write(b'R')
            self.commandstate = 0  # Moving state

        elif self.commandstate == 4:
            # Object detected state
            self.get_logger().info('Sending:S')
            self.serial_port.write(b'S')
            time.sleep(0.1)  # Short delay
            self.get_logger().info('Sending:R')
            self.serial_port.write(b'R')
            self.commandstate = 5  # Move to waiting state
            self.time = time.time()  # Save current time

        elif self.commandstate == 5:
            # Wait 10 seconds then stop
            if (time.time() - 10) >= self.time:
                self.get_logger().info('Sending:S')
                self.serial_port.write(b'S')
                self.commandstate = 10  # Stopped state


def main(args=None):
    # Standard ROS2 node initialization
    rclpy.init(args=args)

    motor_control_server = MotorControlServer()  # Create node instance

    rclpy.spin(motor_control_server)  # Keep node running and listening for events


if __name__ == '__main__':
    main()
