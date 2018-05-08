import cv2
import numpy as np
import matplotlib.pyplot as plt
import serial

ser = serial.Serial()
ser.baudrate = 9600
ser.port = 'COM3'

ser.open()




stop = cv2.CascadeClassifier('haar/stop.xml');

cap = cv2.VideoCapture("http://192.168.42.129:8080/video")

while True:
    ser.write(b'1')
    ret,img = cap.read();
    gray = cv2.cvtColor (img,cv2.COLOR_BGR2GRAY)
    stops = stop.detectMultiScale(gray,1.3,5)
    for (x,y,w,h) in stops:
        ser.write(b'3')
        cv2.rectangle (img,(x,y),(x+w,y+h),(0,255,0),2)
        roi_gray = gray[y:y+h,x:x+w]
        roi_color = img[y:y+h,x:x+w]
    cv2.imshow('img',img)
    key = cv2.waitKey(50)
    if key == ord('q'):
                break

cap.release()
ser.close()
cv2.destroyAllWindows
