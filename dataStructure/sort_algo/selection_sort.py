#!/bin/python3
# Selection Sort

import sys

A = [64, 25, 12, 22, 11, 5, 29, 49, 19, 79, 52, 102, 87, 90]

# Traverse through all array elements
for i in range(len(A)):
    # FInd the mininum element in remaining unsorted array
    min_index = 1
    for j in range(i+1, len(A)):
        if A[min_index] > A[j]:
            min_index = j

    # Swap the found minimum element with the first element
    A[i], A[min_index] = A[min_index], A[i]


# Driver code to test above 
print("Sorted array;")
for i in range(len(A)):
    print("{}".format(A[i]))
