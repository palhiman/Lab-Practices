#!/usr/bin/env python3

from sys import stdin, stdout

N, Q = [int(i) for i in stdin.readline().split()]
arr = [int(i) for i in stdin.readline().split()]

for i in range(Q):
    L, R = [int(i) for i in stdin.readline().split()]
    
    addition = 0

    for j in range(L,R):
        if R <= N-1:
            addition += arr[j]
        else:
            R = N+1
            addition += arr[j]

    mean = addition // (R-L)
    print(mean)



