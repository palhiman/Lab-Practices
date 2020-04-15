#!/usr/bin/env python3

import hashlib
import click
import sys

@click.command()
@click.argument('stringtohash', nargs=1)
@click.argument('algorithm', nargs=1)
def hashThis(stringtohash, algorithm):
    '''
        CLI tool to generate the hash of STRINGTOHASH using
        ALGORITHM
    '''

    # show error if algorithm is not available
    if algorithm not in hashlib.algorithms_guaranteed:
        sys.exit("Invalid algorithm. Valid list:" + str(hashlib.algorithms_guaranteed))

    # algorithm is in our system.
    h = hashlib.new(algorithm)
    h.update(stringtohash.encode('utf-8'))
    print(h.hexdigest())

if __name__ == "__main__":
    hashThis()
