import tensorflow as tf
from numpy import loadtxt
from keras.models import Sequential
from keras.layers import Dense
import pandas as pd
import numpy as np
from sklearn.preprocessing import MinMaxScaler, OneHotEncoder
from sklearn.model_selection import train_test_split
from sklearn import datasets,svm
from sklearn.datasets import load_digits

def load_data():
    digits = load_digits()
    n_samples = len(digits.images)
    x_data = digits['images']
    y_data = digits['target']
    return x_data, y_data

x_data, y_data = load_data()
x_data = x_data.reshape((len(x_data), -1))
y_data = y_data.reshape(y_data.shape[0],-1)

# define the keras model
model = Sequential()
model.add(Dense(66, input_dim=64, activation='relu'))
model.add(Dense(10, activation='sigmoid'))

model.compile(loss='binary_crossentropy', optimizer='adam', metrics=['accuracy'])
model.fit(x_data, y_data, epochs=10000, batch_size=10)

# evaluate the keras model
_, accuracy = model.evaluate(x_data, y_data)
print('Accuracy: %.2f' % (accuracy*100))

