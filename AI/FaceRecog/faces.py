import numpy as np
import cv2
import pickle

face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_alt.xml')

recognizer = cv2.face.LBPHFaceRecognizer_create()
recognizer.read("trainner.yml")

labels = {"person_name": 1}
with open("labels.pickle", 'rb') as f:
    og_labels = pickle.load(f) #give label
    labels = {v: k for k, v in og_labels.items()}

# Read the input image
#img = cv2.imread('test.png')
cap = cv2.VideoCapture(0)

while cap.isOpened():
    _, frame = cap.read()

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    faces = face_cascade.detectMultiScale(gray, scaleFactor= 1.5, minNeighbors=5)

    for (x, y, w, h) in faces:
        roi_gray = gray[y:y+h, x:x+w] #(ycord_start,ycord_end)
        roi_color = frame[y:y+h, x:x+w]

        #recog? deeplearn with keras, tensorflow or pytorch

        id_, conf = recognizer.predict(roi_gray) # id=label conf=confidence
        if conf >=4 and conf<=85:
            #print(id_)
            #print(labels[id_])
            font = cv2.FONT_HERSHEY_SIMPLEX
            name = labels[id_]
            name = name + " " + str(conf)
            cv2.putText(frame, name, (x, y), font, 1, (255, 255, 255), 2, cv2.LINE_AA )
        elif conf < 60:
            font = cv2.FONT_HERSHEY_SIMPLEX
            name = "Not Sure"
            name = name + " " + str(conf)
            cv2.putText(frame, name, (x, y), font, 1, (255, 255, 255), 2, cv2.LINE_AA)

        img_item = "last see.png" # save pic when closed
        cv2.imwrite(img_item, roi_color)

        end_cordx =x+w #lebar
        end_cordy = y+h #tinggi
        cv2.rectangle(frame, (x, y), (end_cordx, end_cordy), (0, 255, 0), 3)


    # Display the output
    cv2.imshow('frame', frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()