import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from urobot_interfaces.action import MotorControl
from urobot_interfaces.msg import VisionData
from urobot_interfaces.msg import ControllerCommand

class MasterNode(Node):

    def __init__(self):
        super().__init__('robot_master_node')
        self._motor_client = ActionClient(self, MotorControl, 'motor_control')
        self.visionsub = self.create_subscription(VisionData,'vision_topic',self.vision_listener_callback,10)
        self.controllersub = self.create_subscription(ControllerCommand,'controller_topic',self.controller_listener_callback,10)
        self.commandargs = []
        
    def vision_listener_callback(self, msg):
        self.itemsdetected = msg.ai_detect_array
        self.distances = msg.distance_array
        self.get_logger().info(f'I heard: Items detected: {self.itemsdetected}, Distances: {self.distances}')
        
    def controller_listener_callback(self, msg):
        self.motorid = msg.motor_id
        self.motordirection = msg.motor_direction
        self.motorspeed = msg.motor_speed
        self.commandargs = [msg.motor_id, msg.motor_direction, msg.motor_speed]
        self.get_logger().info(f'Command Recieved: {self.commandargs}')
        self.send_goal(self.commandargs)

    def send_goal(self, moveorder):
        goal_msg = MotorControl.Goal()
        goal_msg.moveorder = moveorder

        self._motor_client.wait_for_server()

        self._send_goal_future = self._motor_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.exitcode))

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Received feedback: {feedback.motor1pos} {feedback.motor2pos}')


def main(args=None):
    rclpy.init(args=args)
    
    rclpy.spin(MasterNode())
    
    rclpy.shutdown()


if __name__ == '__main__':
    main()