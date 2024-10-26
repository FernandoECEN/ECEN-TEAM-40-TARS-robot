import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from robot_interfaces.action import MotorControl
from robot_interfaces.msg import VisionData

SPIN_QUEUE = []
PERIOD = 0.01

class VisionSub(Node):
    def __init__(self):
        super().__init__('vision_subscriber')
        self.subscription = self.create_subscription(VisionData,'topic',self.listener_callback,10)
        self.subscription
        self.itemsdetected = ['person','bike','chair']
        self.distances = [1.03,1.62,3.59]
        
    def listener_callback(self, msg):
        self.itemsdetected = msg.ai_detect_array
        self.distances = msg.distance_array
        self.get_logger().info(f'I heard: Items detected: {self.itemsdetected}, Distances: {self.distances}')

class MotorControlClient(Node):

    def __init__(self):
        super().__init__('motor_control_client')
        self._motor_client = ActionClient(self, MotorControl, 'motor_control')

    def send_goal(self, moveorder):
        goal_msg = MotorControl.Goal()
        goal_msg.moveorder = moveorder

        self._motor_client.wait_for_server()

        self._send_goal_future = self._motor_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

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
    
    # you'll probably want to append your own node here
    motor_action = MotorControlClient()
    i = 0
    
    SPIN_QUEUE.append(VisionSub())
    SPIN_QUEUE.append(motor_action)

    while rclpy.ok():
        i += 1
        if i==100 or i == 200: motor_action.send_goal(10)
        try:
            for node in SPIN_QUEUE:
                rclpy.spin_once(node, timeout_sec=(PERIOD / len(SPIN_QUEUE)))
        except Exception as e:
            print(f"something went wrong in the ROS Loop: {e}")

    rclpy.shutdown()


if __name__ == '__main__':
    main()