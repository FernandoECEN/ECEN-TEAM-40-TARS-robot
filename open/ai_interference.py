import numpy as np
import cv2 as cv
from ultralytics import YOLO 
import csv 

# Main function that runs the object detection and CSV saving
def main():
    # Path to the CSV file where the results will be saved
    csv_file_path = 'yolo-Data/yolo-Data.csv'
    
    classNames = ["person", "bicycle", "car", "motorbike", "aeroplane", "bus", "train", "truck", "boat",
              "traffic light", "fire hydrant", "stop sign", "parking meter", "bench", "bird", "cat",
              "dog", "horse", "sheep", "cow", "elephant", "bear", "zebra", "giraffe", "backpack", "umbrella",
              "handbag", "tie", "suitcase", "frisbee", "skis", "snowboard", "sports ball", "kite", "baseball bat",
              "baseball glove", "skateboard", "surfboard", "tennis racket", "bottle", "wine glass", "cup",
              "fork", "knife", "spoon", "bowl", "banana", "apple", "sandwich", "orange", "broccoli",
              "carrot", "hot dog", "pizza", "donut", "cake", "chair", "sofa", "pottedplant", "bed",
              "diningtable", "toilet", "tvmonitor", "laptop", "mouse", "remote", "keyboard", "cell phone",
              "microwave", "oven", "toaster", "sink", "refrigerator", "book", "clock", "vase", "scissors",
              "teddy bear", "hair drier", "toothbrush"
              ]

    # Load the exported TensorRT model
    trt_model = YOLO("yolo11n.engine")

    # Open the camera using GStreamer pipeline for the NVidia Jetson platform
    cap = cv.VideoCapture("nvarguscamerasrc sensor-id=0 ! video/x-raw(memory:NVMM),width=1920, height=1080,framerate=30/1, format=NV12 ! nvvidconv flip-method=2 ! video/x-raw,format=BGRx, width=1920, height=1080, pixel-aspect-ratio=1/1 ! videoconvert ! video/x-raw,format=BGR ! appsink drop=1")

    # Check if the camera opened successfully
    if True:

        # Continuously capture frames from the camera
        while True:
            # Read a frame from the video capture
            ret_val, img = cap.read()

            # Run the YOLO model on the current frame to get detection results
            results = trt_model(img)
            
            # Set detected array to empty array
            detected = []

            # Parse Results for names of objects detected
            for r in results:
                boxes = r.boxes

                for box in boxes:

                    cls = int(box.cls[0])
                    detected.append([classNames[cls]])

            # Save the detection results to the CSV file
            save_list_to_csv(detected, csv_file_path)
            
    else:
        # Print an error message if the camera could not be opened
        print("camera open failed")

# Function to save the detection results to a CSV file
def save_list_to_csv(data, file_path):
    try:
        # Open the specified CSV file in write mode, using UTF-8 encoding
        with open(file_path, mode='w', newline='', encoding='utf-8') as file:
            # Create a CSV writer object
            writer = csv.writer(file)
            # Write the data to the CSV file
            writer.writerows(data)  # Write all rows from the list

        # Print a success message once the data is saved
        print(f"Data has been successfully saved to {file_path}")
    except Exception as e:
        # Print an error message if there is an exception during CSV writing
        print(f"An error occurred: {e}")

# Run the main function if this script is executed
if __name__ == '__main__':
    main()
