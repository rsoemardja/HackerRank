#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the kaprekarNumbers function below.
def kaprekarNumbers(p, q):
    count = 0
    for x in range(p, q + 1):
        d = str(x)
        d2 = [x for x in d]
        square = str(x ** 2)
        if x == 1:
            print(x, end=' ')
        square2 = list(reversed(square))
        part1 = list(reversed(square2[:len(d2)]))

        part1b = ''.join(part1)
        part2 = list(reversed(square2[len(d2):]))
        part2b = ''.join(part2)

        part1c = int(part1b)
        if part2b != '':
            part2c = int(part2b)
            if part1c + part2c == int(x):
                count = count + 1
                print(x, end=' ')
    if count == 0:
        print('INVALID RANGE')

if __name__ == '__main__':
    p = int(input())

    q = int(input())

    kaprekarNumbers(p, q)
