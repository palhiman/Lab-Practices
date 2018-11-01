#!/usr/bin/python3
# Naive Bayes classifier for predicting the pima-indians-diabetes-database whether
# they are having diabetes or not.
# by: rudra0
#

import csv
import random
import math
import matplotlib.pyplot as plt
import pandas

# loading the csv file 
def loadCSV(filename):
	lines = csv.reader(open(filename, "rt"))
	dataset = list(lines)
	for i in range(len(dataset)):
		dataset[i] = [float(x) for x in dataset[i]]
	return dataset

#splitting the dataset
def splitDataset(dataset, splitRatio):
	trainSize = int(len(dataset) * splitRatio)
	trainSet = []
	copy = list(dataset)
	while len(trainSet) < trainSize:
		index = random.randrange(len(copy))
		trainSet.append(copy.pop(index))
	return [trainSet, copy]

# separate the dataset by class
def separateByClass(dataset):
	separated = {}
	for i in range(len(dataset)):
		vector = dataset[i]
		if (vector[-1] not in separated):
			separated[vector[-1]] = []
		separated[vector[-1]].append(vector)
	return separated

# calculate the mean and standard deviation
def mean(numbers):
	return sum(numbers)/float(len(numbers))

def stdev(numbers):
	avg = mean(numbers)
	variance = sum([pow(x-avg,2) for x in numbers])/float(len(numbers)-1)
	return math.sqrt(variance)


# summarize the dataset
def summarize(dataset):
	summaries = [(mean(attribute), stdev(attribute)) for attribute in zip(*dataset)]
	del summaries[-1]
	return summaries

# summanrize the attributes using class
def summarizeByClass(dataset):
	separated = separateByClass(dataset)
	summaries = {}
	for classValue, instances in separated.items():
		summaries[classValue] = summarize(instances)
	return summaries

# calculate probability
def calculateProbability(x, mean, stdev):
	exponent = math.exp(-(math.pow(x-mean,2)/(2*math.pow(stdev,2))))
	return (1 / (math.sqrt(2*math.pi) * stdev)) * exponent

def calculateClassProbabilities(summaries, inputVector):
	probabilities = {}
	for classValue, classSummaries in summaries.items():
		probabilities[classValue] = 1
		for i in range(len(classSummaries)):
			mean, stdev = classSummaries[i]
			x = inputVector[i]
			probabilities[classValue] *= calculateProbability(x, mean, stdev)
	return probabilities

def predict(summaries, inputVector):
	probabilities = calculateClassProbabilities(summaries, inputVector)
	bestLabel, bestProb = None, -1
	for classValue, probability in probabilities.items():
		if bestLabel is None or probability > bestProb:
			bestProb = probability
			bestLabel = classValue
	return bestLabel

# Make predictions
def getPredictions(summaries, testSet):
	predictions = []
	for i in range(len(testSet)):
		result = predict(summaries, testSet[i])
		predictions.append(result)
	return predictions

# calculating accuracy
def getAccuracy(testSet, predictions):
	correct = 0
	for x in range(len(testSet)):
		if testSet[x][-1] == predictions[x]:
			correct += 1
	return (correct/float(len(testSet))) * 100.0



def main():
	filename = 'pima-indians-diabetes.data.csv'
	splitRatio = 0.67
	dataset = loadCSV(filename)
	names = ['pregnancy', 'plasma', 'B.P.', 'skin thickness', 'insulin', 'B.M.I', 'pedigree', 'age', 'class']
	print(f"Loaded data file {filename} with {len(dataset)} rows") 
	print("\nFirst 10 rows of the dataset:")
	print(names)
	for i in range(10):
		print(dataset[i])
	print("\n")	
	trainingSet, testSet = splitDataset(dataset, splitRatio)
	print(f"Split {len(dataset)} rows into train={len(trainingSet)} and test={len(testSet)} rows.") 
	#prepare model
	summaries = summarizeByClass(trainingSet)
	#test model
	predictions = getPredictions(summaries, testSet)
	accuracy = getAccuracy(testSet, predictions)
	print(f"Accuracy: {accuracy}%")

	# plotting the historams
	
	data = pandas.read_csv(filename, names=names)
	data.hist()
	print("historams for different parameters of the dataset.")
	plt.show()


if __name__ == "__main__":
	main()