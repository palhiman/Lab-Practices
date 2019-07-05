#!/usr/bin/env python3
# Memorise Me!!!
# solved by: Himanshu Shekhar

x, y = map(int, input().split())

arr = [[]]

for i in range(x):
    for j in range(y):
        arr.append([i[j]])

print(arr)
