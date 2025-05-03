import rclpy  # ROS2 Python library
from rclpy.action import ActionClient  # To interact with ROS2 actions
from rclpy.node import Node  # Base class for creating ROS2 nodes

# Import message types from the custom robot_interfaces package
from urobot_interfaces.msg import MotorControl  # Action to control robot motors
from urobot_interfaces.msg import VisionData  # Message type for vision data
from urobot_interfaces.msg import ControllerCommand  # Message type for controller commands

# Define the MasterNode class that inherits from ROS2 Node
class MasterNode(Node):

    # Constructor for the MasterNode class
    def __init__(self):
        # Initialize the node with the name 'robot_master_node'
        super().__init__('robot_master_node')
        
        # Initialize an action client to send motor control goals to the 'motor_control' action server
        self._motor_client = self.create_publisher(MotorControl, 'motor_control', 10)
        #self.morotinterupt = self.create_publisher(MotorInterupt, 'interupt_topic', 10)
        
        # Create subscribers for vision data and controller commands topics
        self.visionsub = self.create_subscription(VisionData, 'vision_topic', self.vision_listener_callback, 10)
        self.controllersub = self.create_subscription(ControllerCommand, 'controller_topic', self.controller_listener_callback, 10)
        
        # Initialize a list to store motor command arguments
        self.commandargs = []
        
    # Callback function to handle incoming vision data messages
    def vision_listener_callback(self, msg):
        # Extract the detected items and their distances from the message
        self.itemsdetected = msg.ai_detect_array
        self.distances = msg.distance_array
        if self.distances[0] < 80 and self.distances[0] > 63:
            motorcontrol = MotorControl()
            motorcontrol.motor_id = 4               # Motor ID
            motorcontrol.motor_direction = 1 # Motor Direction
            motorcontrol.motor_speed = 1
            self.get_logger().info("Object too close: Halting")
            self._motor_client.publish(motorcontrol)
            
        
        # Log the detected items and their distances
        self.get_logger().info(f'I heard: Items detected: {self.itemsdetected}, Distances: {self.distances}')
        
    # Callback function to handle incoming controller command messages
    def controller_listener_callback(self, msg):
        # Extract motor command details from the message
        self.motorid = msg.motor_id
        self.motordirection = msg.motor_direction
        self.motorspeed = msg.motor_speed
        
        # Store the motor command arguments in the commandargs list
        self.commandargs = [msg.motor_id, msg.motor_direction, msg.motor_speed]
        
        # Log the received command
        self.get_logger().info(f'Command Received: {self.commandargs}')
        
        motorcontrol = MotorControl()
        
        motorcontrol.motor_id = self.motorid               # Motor ID
        motorcontrol.motor_direction = self.motordirection # Motor Direction
        motorcontrol.motor_speed = self.motorspeed         # Motor Speed
        
        # Send the motor control goal to the motor control action server
        self._motor_client.publish(motorcontrol)

    # Function to send the motor control goal to the action server


# Main function that initializes and spins the ROS2 node
def main(args=None):
    # Initialize the ROS2 Python client library
    rclpy.init(args=args)
    
    # Spin the MasterNode to keep the node running and processing callbacks
    rclpy.spin(MasterNode())
    
    # Shutdown the ROS2 client library when done
    rclpy.shutdown()


# Entry point for running the script
if __name__ == '__main__':
    main()
