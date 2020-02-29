#!/usr/bin/env python
# Python implementation of Insertion Sort

def InsertionSort(arr, n):
    for i in range(1, n):
        value = arr[i]
        hole = i
        while (hole>0 and arr[hole-1]>value):
            arr[hole] = arr[hole-1]
            hole -= 1

        arr[hole] = value


if __name__ == "__main__":
    arr = [12,11,13,5,6,14,4,3]
    InsertionSort(arr, len(arr))

    for i in range(len(arr)):
        print("%d " % arr[i])


