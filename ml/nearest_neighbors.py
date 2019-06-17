#!/usr/bin/python

import numpy as np
import matplotlib.pyplot as plt
from matplotlib.colors import ListedColormap
from sklearn import neighbors, datasets

nearest_neighbors = 15

# import some data to start with
iris = datasets.load_iris()

# we only takes the first two featuers
x = iris.data[:, :2]
y = iris.target

h = 0.02   # step size in the mesh

# create color maps
cmap_light = ListedColormap(['#FFAAAA', '#AAFFAA', '#AAAAFF'])
cmap_bold = ListedColormap(['#FF0000', '#00FF00', '#0000FF'])

for weights in ['uniform', 'distance']:
    # we create an instance of Neighbors classifier and fit the data
    clf = neighbors.KNeighborsClassifier(nearest_neighbors, weights=weights)
    clf.fit(x, y)

    # plot the decision boundary. For that we will assign a color to each
    # point in the mesh 
    x_min = x[:, 0].min() - 1
    x_max = x[:, 0].max() + 1
    y_min = y[:, 1].min() - 1
    y_max = y[:, 1].max() + 1

    xx, yy = np.meshgrid(np.arange(x_min, x_max, h), np.arange(y_min, y_max, h))

    z = clf.predict(np.c_[xx.ravel(), yy.ravel()])

    # put the result into a color plot

    z = z.reshape(xx.shape)
    plt.figure()
    plt.pcolormesh(xx, yy, z, cmap=cmap_light)

    # plot also the training points
    plt.scatter(x[:, 0], x[:, 1], c=y, cmap=cmap_bold, edgecolor='k', s=20)
    plt.xlim(xx.min(), xx.max())
    plt.ylim(yy.min(), yy.max())

    plt.title("3-Classification (k={}, weights = {})" . format(nearest_neighbors, weights))


plt.show()

