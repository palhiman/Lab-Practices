#!/usr/bin/python

import pandas as pd
import numpy as np
from sklearn import preprocessing
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression
from sklearn.cross_validation import train_test_split
import seaborn as sns
from sklearn.metrics import confusion_matrix

plt.rc("font", size=16)
sns.set(style="white")
sns.set(style="whitegrid", color_codes=True)


data = pd.read_csv('breast_cancer.csv', header=0)
data = data.dropna()
print(data.shape)
print(list(data.columns))

# our prediction is based on the class i.e. malignant or renign
# so we will dropp the variable that we do not need

data.drop(data.columns[[1,2,3,4,5,6,7,8,9]], axis=1, inplace=True)

# accessing the variable with only two values.

data2 = pd.get_dummies(data, columns=['class'])
print(list(data2.columns))

# split the data into training and test sets
x = data2.iloc[:, 1:]
y = data2.iloc[:, 0]
x_train, x_test, y_train, y_test = train_test_split(x, y, random_state=0)

print(x_train.shape)

clf = LogisticRegression(random_state=0)
clf.fit(x_train, y_train)

y_pred = clf.predict(x_test)
cm = confusion_matrix(y_test, y_pred)
print(cm)

print("Accuracy of logistic regression classifier on test set:{:.2f}" . format(clf.score(x_test, y_test)))


