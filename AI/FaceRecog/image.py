import cv2
import pickle


face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_alt.xml')
# Read the input image
recognizer = cv2.face.LBPHFaceRecognizer_create()
recognizer.read("trainner.yml")

labels = {"person_name": 1}
with open("labels.pickle", 'rb') as f:
    og_labels = pickle.load(f) #give label
    labels = {v: k for k, v in og_labels.items()}

img = cv2.imread('testing jansen/')
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
faces = face_cascade.detectMultiScale(gray, scaleFactor=1.5, minNeighbors=5)


for (x, y, w, h) in faces:
    cv2.rectangle(img, (x, y), (x+w, y+h), (255, 0, 0), 3)
    roi_gray = gray[y:y + h, x:x + w]
    id_, conf = recognizer.predict(roi_gray)  # id=label conf=confidence
    if conf >= 50:
        # print(id_)
        # print(labels[id_])
        font = cv2.FONT_HERSHEY_SIMPLEX
        name = labels[id_]
        color = (255, 255, 255)
        name = name + " " + str(conf)
        stroke = 2
        cv2.putText(img, name, (x, y), font, 1, color, stroke, cv2.LINE_AA)

    else:
        font = cv2.FONT_HERSHEY_SIMPLEX
        name = "Not Sure"
        name = name + " " + str(conf)
        cv2.putText(img, name, (x, y), font, 1, (255, 255, 255), 2, cv2.LINE_AA)


    # Display the output

cv2.imshow('img', img)
cv2.waitKey()
