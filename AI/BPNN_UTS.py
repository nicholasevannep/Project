import pandas as pd
import tensorflow as tf
import numpy as np
from sklearn.preprocessing import MinMaxScaler, OneHotEncoder
from sklearn.model_selection import train_test_split
from sklearn import datasets,svm
from sklearn.datasets import load_digits
from sklearn.metrics import classification_report



def load_data():
    digits = load_digits()
    n_samples = len(digits.images)
    x_data = digits['images']
    y_data = digits['target']
    return x_data, y_data

x_data, y_data = load_data()
x_data = x_data.reshape((len(x_data), -1))
y_data = y_data.reshape(y_data.shape[0],-1)

scaler = MinMaxScaler()
x_data = scaler.fit_transform(x_data)

encoder = OneHotEncoder(sparse=False)
y_data = encoder.fit_transform(y_data)

layer = {
    'input' : 64,
    'hidden' : 66,
    'output' : 10
}

weight = {
    'to_hidden' : tf.Variable(tf.random_normal([layer['input'],layer['hidden']])),
    'to_output' : tf.Variable(tf.random_normal([layer['hidden'],layer['output']]))
}

bias = {
    'to_hidden' : tf.Variable(tf.random_normal([layer['hidden']])),
    'to_output' : tf.Variable(tf.random_normal([layer['output']]))
}


x_train, x_test, y_train, y_test = train_test_split(x_data, y_data, test_size= .2)
#dia random terus ambil 20% di test 80% di train

x = tf.placeholder(tf.float32, [None, layer['input']])
target = tf.placeholder(tf.float32, [None,layer['output']])

def predict():
    wx_b1= tf.matmul(x, weight['to_hidden']) + bias['to_hidden']
    y1= tf.nn.sigmoid(wx_b1)

    wx_b2= tf.matmul(y1, weight['to_output']) + bias['to_output']
    y2= tf.nn.sigmoid(wx_b2)
    return y2

y= predict()
epoch = 10000
alpha = 0.5
error = tf.reduce_mean(0.5 * (target - y) **2)
optimizer = tf.train.GradientDescentOptimizer(alpha)
train = optimizer.minimize(error)
acclist = []
vallist=[]
predlist = []



with tf.Session() as sess: 
    sess.run(tf.global_variables_initializer())
    for i in range (epoch) :
        sess.run(train, feed_dict={x:x_train, target:y_train})
        
        if i % 1000 == 0 :
            true_prediction = tf.equal(tf.argmax(y, axis=1),tf.argmax(target, axis=1))
            accuracy = tf.reduce_mean(tf.cast(true_prediction,tf.float32))
            acc = sess.run (accuracy, feed_dict= {
                x:x_test,
                target: y_test
            })
            prediction = tf.argmax(y, axis=1)
            predprint = sess.run(prediction,feed_dict={
                x: x_test,
                target: y_test
            })

            acctrain = sess.run (accuracy, feed_dict= {
                x:x_train,
                target: y_train
            })
            #vallist.append(scores)
            predlist.append(acctrain)
            acclist.append(acc)

            print('Epoch-{} Accuracy: {}'.format(i,acc))

feature = [0,1,2,3,4,5,6,7,8,9]
y_test = y_test.dot(feature).astype(int)

print(classification_report(y_test,predprint, digits=3))

import matplotlib.pyplot as plt
plt.plot(acclist, label='Accuracy')
plt.plot(predlist,label='Validation')
plt.legend(bbox_to_anchor=(0., 1.02, 1., .102), loc='lower left',
           ncol=2, borderaxespad=0.)
plt.xlabel('Epoch')
plt.ylabel('Accuracy')
plt.show()




