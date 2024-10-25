import time

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from robot_interfaces.action import MotorControl

global motor1pos
global motor2pos
motor1pos = 0
motor2pos = 0

def get_motor_pos(motorid,pos):
        pos += 1
        return pos

class MotorControlServer(Node):

    def __init__(self):
        super().__init__('motor_control_server')
        self._action_server = ActionServer(
            self,
            MotorControl,
            'motor_control',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        global motor1pos
        global motor2pos
        self.get_logger().info('Executing goal...')

        gloal = goal_handle.request.moveorder
        
        feedback_msg = MotorControl.Feedback()
        feedback_msg.motor1pos = motor1pos
        feedback_msg.motor2pos = motor2pos
        
        for i in range(0, gloal):
            motor1pos = get_motor_pos(1,i)
            motor2pos = get_motor_pos(2,i)
            feedback_msg.motor1pos = motor1pos
            feedback_msg.motor2pos = motor2pos
            self.get_logger().info(f'Current motor positions: {feedback_msg.motor1pos} {feedback_msg.motor2pos}')
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.2)

        goal_handle.succeed()

        result = MotorControl.Result()
        result.exitcode = 0
        return result


def main(args=None):
    rclpy.init(args=args)

    motor_control_server = MotorControlServer()

    rclpy.spin(motor_control_server)


if __name__ == '__main__':
    main()