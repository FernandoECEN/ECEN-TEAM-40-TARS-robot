# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node

from robot_interfaces.msg import MotorFeedback


class MotorPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(MotorFeedback, 'topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.motor1pos_dummy1 = 0
        self.motor1pos_dummy2 = 0

    def timer_callback(self):
        motorfeedback = MotorFeedback()
        motorfeedback.feedback1 = self.motor1pos_dummy1
        motorfeedback.feedback2 = self.motor1pos_dummy2
        self.publisher_.publish(motorfeedback)
        self.get_logger().info(f'Publishing: {motorfeedback.feedback1} {motorfeedback.feedback2}')


def main(args=None):
    rclpy.init(args=args)

    motor_publisher = MotorPublisher()

    rclpy.spin(motor_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    motor_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
