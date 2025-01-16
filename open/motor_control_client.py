import rclpy  # ROS2 Python library
from rclpy.action import ActionClient  # To interact with ROS2 actions
from rclpy.node import Node  # Base class for creating ROS2 nodes

# Import message types from the custom robot_interfaces package
from robot_interfaces.action import MotorControl  # Action to control robot motors
from robot_interfaces.msg import VisionData  # Message type for vision data
from robot_interfaces.msg import ControllerCommand  # Message type for controller commands

# Define the MasterNode class that inherits from ROS2 Node
class MasterNode(Node):

    # Constructor for the MasterNode class
    def __init__(self):
        # Initialize the node with the name 'robot_master_node'
        super().__init__('robot_master_node')
        
        # Initialize an action client to send motor control goals to the 'motor_control' action server
        self._motor_client = ActionClient(self, MotorControl, 'motor_control')
        
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
        
        # Send the motor control goal to the motor control action server
        self.send_goal(self.commandargs)

    # Function to send the motor control goal to the action server
    def send_goal(self, moveorder):
        # Create a MotorControl Goal message and set the moveorder
        goal_msg = MotorControl.Goal()
        goal_msg.moveorder = moveorder

        # Wait for the motor control action server to be ready
        self._motor_client.wait_for_server()

        # Send the goal asynchronously and specify a callback for feedback
        self._send_goal_future = self._motor_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        # Add a callback for when the goal response is received
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    # Callback function for handling the result of the goal response
    def goal_response_callback(self, future):
        # Retrieve the result of the goal response
        goal_handle = future.result()
        
        # If the goal was not accepted, log a message and return
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        # If the goal was accepted, log a message and request the result asynchronously
        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        
        # Add a callback to handle the result when it's available
        self._get_result_future.add_done_callback(self.get_result_callback)

    # Callback function to handle the result of the motor control action
    def get_result_callback(self, future):
        # Retrieve and log the exit code of the result
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.exitcode))

    # Callback function to handle feedback from the action server
    def feedback_callback(self, feedback_msg):
        # Extract and log the feedback from the action server
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Received feedback: {feedback.motor1pos} {feedback.motor2pos}')


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
