import time
import serial

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from robot_interfaces.action import MotorControl

class MotorControlServer(Node):

    def __init__(self):
        super().__init__('motor_control_server')
        self._action_server = ActionServer(self,MotorControl,'motor_control',self.motor_control_callback)
        serial_port = serial.Serial(
            port="/dev/ttyTHS1",
            baudrate=9600,
            bytesize=serial.EIGHTBITS,
            parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE,
        )
        self.uartdata = {'motor1pos':0,'motor1dir':0,'motor2pos':0,'motor2dir':0,'gyro1':0,'gyro2':0,'gyro3':0}
            

    def motor_control_callback(self, goal_handle):
        global motor1pos
        global motor2pos
        self.get_logger().info('Executing goal...')

        goal = goal_handle.request.moveorder
        
        feedback_msg = MotorControl.Feedback()
        
        
        self.uart_move_motor(goal)
        
        # for i in range(1, goal[2]+1):
        #     self.read_uart_dummy(goal)
        #     feedback_msg.motor1pos = self.uartdata['motor1pos']
        #     feedback_msg.motor2pos = self.uartdata['motor2pos']
        #     self.get_logger().info(f'Current motor positions: {feedback_msg.motor1pos} {feedback_msg.motor2pos}')
        #     goal_handle.publish_feedback(feedback_msg)
        #     time.sleep(0.2)

        goal_handle.succeed()

        result = MotorControl.Result()
        result.exitcode = 0
        return result
    
    def uart_move_motor(self,movedist):
        try:
            self.serial_port.write(b'P')
            self.serial_port.write(movedist)
            while True:
                if self.serial_port.inWaiting() > 0:
                    data = self.serial_port.read()
                    print(data)
                    if data == 'G': break
        except Exception as e:
            print(f"Error reading from UART device: {e}")
    
    # def read_uart_dummy(self, goal):
    #     if goal[0] == 1:
    #         self.uartdata['motor1pos'] += + goal[1]
    #         self.uartdata['motor1dir'] = goal[1]
    #     elif goal[0] == 2:
    #         self.uartdata['motor2pos'] += goal[1]
    #         self.uartdata['motor2dir'] = goal[1]


def main(args=None):
    rclpy.init(args=args)

    motor_control_server = MotorControlServer()

    rclpy.spin(motor_control_server)


if __name__ == '__main__':
    main()