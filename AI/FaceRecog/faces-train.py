import os
#os.path.dirname to go current dir
BASE_DIR = os.path.dirname(os.path.abspath(__file__))
image_dir = os.path.join(BASE_DIR, "images")
import numpy as np
import cv2
from PIL import Image
import pickle

face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_alt.xml')

recognizer = cv2.face.LBPHFaceRecognizer_create()

current_id = 0
label_ids = {}
y_labels = []
x_train = []

for root, dirs, files in os.walk(image_dir):
    for file in files:
        if file.endswith("png") or file.endswith("jpg"):
            path = os.path.join(root, file)
            label = os.path.basename(os.path.dirname(path)).replace(" ", "-").lower()
            #print(label, path)
            if label in label_ids:
                pass
            else:
                label_ids[label] = current_id
                current_id += 1
            id_ = label_ids[label]
            #print(label_ids)
            #y_labels.append(label) #some number
            #x_train.append(path) #veriv this img, turn into NUMPY array, Gray

            pil_image = Image.open(path).convert("L") #to give image and turn to grayscale
            size = (1920, 1080)
            final_image = pil_image

            image_array = np.array(final_image, "uint8") #uint8 as type
            #print(image_array)
            faces = face_cascade.detectMultiScale(image_array, scaleFactor= 1.5, minNeighbors=5)

            for (x, y, w, h,) in faces:
                roi = image_array[y:y+h, x:x+w]
                x_train.append(roi)
                y_labels.append(id_)
#print(y_labels)
#print(x_train)

with open("labels.pickle", 'wb') as f:
    pickle.dump(label_ids, f)

recognizer.train(x_train, np.array(y_labels))
recognizer.save("trainner.yml")




