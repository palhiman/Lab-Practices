#!/usr/bin/env python
# python program for implementation of QuickSort


def Partition(arr, start, end):
    pivot = arr[end]
    pIndex = start
    for i in range(start, end):
        if arr[i] <= pivot:
            arr[i], arr[pIndex] = arr[pIndex], arr[i]
            pIndex += 1

    arr[pIndex], arr[end] = arr[end], arr[pIndex]
    return pIndex

def QuickSort(A, start, end):
    if start < end:
        pIndex = Partition(A, start, end)
        QuickSort(A, start, pIndex-1)
        QuickSort(A, pIndex+1, end)


if __name__ == "__main__":
    arr = [10,7,9,1,4,2,8,6,5]
    n = len(arr)
    QuickSort(arr, 0, n-1)
    print("Sorted array is:")
    for i in range(n):
        print("%d " % arr[i])



