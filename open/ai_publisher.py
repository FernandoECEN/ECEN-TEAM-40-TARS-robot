import rclpy
from rclpy.node import Node
import os
import time
import csv

from robot_interfaces.msg import VisionData


class AIDataPublisher(Node):

    def __init__(self):
        super().__init__('ai_publisher')  # Initialize the node with the name 'ai_publisher'
        self.publisher_ = self.create_publisher(VisionData, 'vision_topic', 1)  # Create a publisher for VisionData
        self.distances = [1.03, 1.62, 3.59]
        self.csv_file_path = "yolo-Data/yolo-Data.csv"
        self.last_modified_time = None
        self.has_changed = False
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
    def read_csv_file(self,file_path):
        with open(file_path, newline='', encoding='utf-8') as csvfile:
            reader = csv.reader(csvfile)
            return reader[0]

    def check_file_changed(self, file_path, last_modified_time):
        try:
            current_modified_time = os.path.getmtime(file_path)
            
            if last_modified_time is None or current_modified_time != last_modified_time:
                return current_modified_time, True
            return last_modified_time, False
        except FileNotFoundError:
            print("File not found!")
            return last_modified_time, False

    def timer_callback(self):
        # Check if the CSV file has changed
        print(self.csv_file_path, self.last_modified_time)
        self.last_modified_time, self.has_changed = self.check_file_changed(self.csv_file_path, self.last_modified_time)
        
        if self.has_changed:
            print("CSV file has changed. Reading new data...")
            self.read_csv_file(self.csv_file_path)
        else:
            print("No change detected.")
        



def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS 2 system

    ai_publisher = AIDataPublisher()  # Create an instance of the AIDataPublisher node

    rclpy.spin(ai_publisher)  # Keep the node running and processing incoming messages

    # Destroy the node explicitly after shutdown (optional)
    ai_publisher.destroy_node()
    rclpy.shutdown()  # Shutdown the ROS 2 system



if __name__ == '__main__':
    main()
