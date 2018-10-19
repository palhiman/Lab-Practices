#!/usr/bin/python
# Creating a Naive Bayes classifier for classifying the tumor as 
# malignant(0) or benign(1).

# for loading the dataset
from sklearn import datasets
# for building model i.e. creating training and test datasets
from sklearn.model_selection import train_test_split
# for using Naive Bayes classifier
from sklearn.naive_bayes import GaussianNB
# for checking the accuracy of the created model
from sklearn.metrics import accuracy_score
# Logistic regression
from sklearn.linear_model import LogisticRegression
# decisionn tree
from sklearn.tree import DecisionTreeClassifier

import matplotlib.pyplot as plt
from matplotlib.colors import ListedColormap

#style.use('ggplot') 

# load the dataset
data = datasets.load_breast_cancer()

# Organize our data
label_names = data['target_names']
labels = data['target']
features_names = data['feature_names']
features = data['data']

# Look our data
print("*" * 70)
print("Label names:")
print(label_names)
#print("*" * 70)
#print('Class label =', labels[0], labels[1])
print("*" * 70)
print("Available features:")
print(features_names)
print("*" * 70)
print(features)


# now split the data into training and test sets
train, test, train_labels, test_labels = train_test_split(features, labels, test_size=0.45, random_state = 50)

# creating the naive bayes classifier
nb = GaussianNB()

# training the classifier
model = nb.fit(train, train_labels)

# making predictions
print("*" * 70)
print("--------Naive Bayes----------")
predictions = nb.predict(test)
print("Predictions by Naive Bayes classifier:\n", predictions)
#print(predictions)
# Evaluate accuracy
nb_accuracy = accuracy_score(test_labels, predictions) * 100
print("Accuracy of the model: {:.2f}" . format(nb_accuracy))
print("*" * 70)

plt.figure(1)
plt.plot(predictions)
plt.show()

# creating the logistic regression classifier
lr = LogisticRegression()
model1 = lr.fit(train, train_labels)
predictions1 = lr.predict(test)
print("---------Logistic Regression-----------")
print("Predictions by Logistic Regression:\n",predictions1)
print("Accuracy of Logistic Regression: {:.2f}" . format(accuracy_score(test_labels, predictions1) * 100))

print("*" * 70)
plt.figure(2)
plt.plot(predictions1)
plt.show()

# decision tree
dtree = DecisionTreeClassifier(max_depth=10, random_state=10, max_features=None, min_samples_leaf=15)

model2 = dtree.fit(train, train_labels)
predictions2 = dtree.predict(test)
print("-----------Decision Tree-----------")
print("Predictions by Decision Tree :\n",predictions2)
print("Accuracy of decision tree: {:.2f}" . format(accuracy_score(test_labels, predictions2) * 100))

plt.figure(3)
plt.plot(predictions2)
plt.show()
