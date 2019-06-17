#!/usr/bin/python
# Implementation of Diffie-Hellman-Merkel key exchange algorithm
# Author: Himanshu Shekhar

import math

def power(a, b , P):
    if b == 1:
        return a
    else:
        return (math.pow(a, b) % P)


if __name__ == "__main__":
    p = int(input("Enter the comman prime number:"))
    g = int(input("Enter a base(primitive root of p):"))
    a = int(input("Enter the private key for Alice:"))
    b = int(input("Enter the private key of Bob:"))

    # Generating a key by Alice and to be sent to Bob
    print("Key from Alice to Bob:")
    x = power(g, a, p)

    # Generating a key by Bob and to be sent to Alice
    print("Key from Bob to Alice:")
    y = power(g, b, p)

    print("The secret exchange between them....")
    ka = power(y, a, p)
    print(f"key for Alice:{ka}")

    kb = power(x, b, p)
    print(f"key for Bob:{kb}")

