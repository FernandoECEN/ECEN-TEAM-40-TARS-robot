import time
# import spidev

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from urobot_interfaces.action import MotorControl
# from robot_interfaces.action import SPIData

class MotorControlServer(Node):

    def __init__(self):
        super().__init__('motor_control_server')
        self._action_server = ActionServer(self,MotorControl,'motor_control',self.motor_control_callback)
        # self.publisher_ = self.create_publisher(SPIData, 'spi_topic', 10)
        # timer_period = 0.5  # seconds
        # self.timer = self.create_timer(timer_period, self.read_spi)
        # # Create SPI object
        # spi = spidev.SpiDev()
        # spi.open(0, 0)  # Open SPI bus 0, device 0

        # # SPI configuration
        # spi.max_speed_hz = 1000000  # Set SPI clock speed
        # spi.mode = 0b00  # Set SPI mode
        
        self.spidata = {'motor1pos':0,'motor1dir':0,'motor2pos':0,'motor2dir':0,'gyro1':0,'gyro2':0,'gyro3':0}
        
        
    # def retract_linear(self,motorid):
    #     if self.linearR.pos > 0:
    #         gpio
        
    # def forward_walk():
    #     if self.linearR < linearext:
    #         extend_linear(linearR.ID)
            

    def motor_control_callback(self, goal_handle):
        global motor1pos
        global motor2pos
        self.get_logger().info('Executing goal...')

        goal = goal_handle.request.moveorder
        
        feedback_msg = MotorControl.Feedback()
        
        for i in range(1, goal[2]+1):
            self.read_spidata_dummy(goal)
            feedback_msg.motor1pos = self.spidata['motor1pos']
            feedback_msg.motor2pos = self.spidata['motor2pos']
            self.get_logger().info(f'Current motor positions: {feedback_msg.motor1pos} {feedback_msg.motor2pos}')
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.2)

        goal_handle.succeed()

        result = MotorControl.Result()
        result.exitcode = 0
        return result
    
    # def read_spi(self):
    #     try:
    #         to_send = []  # Data to send
    #         rawdata = spi.xfer2(to_send)  # Send and receive data
    #         data =  list(rawdata)
    #         self.spidata['motor1pos'] = data[0]
    #         self.spidata['motor1dir'] = data[1]
    #         self.spidata['motor2pos'] = data[2]
    #         self.spidata['motor2dir'] = data[3]
    #         self.spidata['gyro1'] = data[4]
    #         self.spidata['gyro2'] = data[5]
    #         self.spidata['gyro3'] = data[6]
    #     except Exception as e:
    #         print(f"Error reading from SPI device: {e}")
    
    def read_spidata_dummy(self, goal):
        if goal[0] == 1:
            self.spidata['motor1pos'] += + goal[1]
            self.spidata['motor1dir'] = goal[1]
        elif goal[0] == 2:
            self.spidata['motor2pos'] += goal[1]
            self.spidata['motor2dir'] = goal[1]


def main(args=None):
    rclpy.init(args=args)

    motor_control_server = MotorControlServer()

    rclpy.spin(motor_control_server)


if __name__ == '__main__':
    main()