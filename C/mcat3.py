#!/usr/bin/env python3
# mcat.py
from __future__ import print_function

import sys

with open(sys.argv[1]) as fin:
    while True:
        c = fin.read(1)
        if c == '':
            break
        print(c, end='')


