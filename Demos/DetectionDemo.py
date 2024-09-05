import cv2 as cv
from ultralytics import YOLO
import math

model = YOLO("yolo-Weights/yolov8n.pt")
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

cap = cv.VideoCapture(0)
cap.set(3, 640)
cap.set(4, 480)

while True:
    ret, frame = cap.read()
    results = model(frame, stream=True)

    for r in results:
        boxes = r.boxes

        for box in boxes:
            xyxy = box.xyxy.tolist()[0]
            x1, y1, x2, y2 = xyxy
            x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)

            cv.rectangle(frame, (x1, y1), (x2, y2), (255, 0, 0), 2)

            confidence = math.ceil((box.conf[0]*100)/100)
            print("Confidence: ",confidence)

            cls = int(box.cls[0])
            print("Class: ",classNames[cls])

            org = [x1, y1]
            font = cv.FONT_HERSHEY_SIMPLEX
            fontScale = 1
            color = (0, 255, 0)
            thickness = 2

            cv.putText(frame, classNames[cls], org, font, fontScale, color, thickness)



    cv.imshow('Video', frame)

    if cv.waitKey(1) == ord('q'):
        break

cap.release()
cv.destroyAllWindows()