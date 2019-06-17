#!/usr/bin/env python2
# Problem : FizzBuzz.py
# Created : Himanshu Shekhar (Pal)

T = int(raw_input())  # number of test cases
for i in range(T):
    x,y = raw_input().split()
    x,y = int(x), int(y)

    for j in range(x):
        print j+1
        if j % 3 == 0:
            print "fizz"
        elif j % 5 == 0:
            print "buzz"
        elif (j%3==0) and (j%5==0):
            print "fizzbuzz"

    for k in range(x):
        print k+1
        if k % 3 == 0:
            print "fizz"
        elif k % 5 == 0:
            print "buzz"
        elif (k%3==0) and (k%5==0):
            print "fizzbuzz"


