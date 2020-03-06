#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the biggerIsGreater function below.
def biggerIsGreater(w):
    for i in range(int(input())):
        s = list(input())
        pivot = next((i - 1 for i in range(len(s) - 1, 0, -1) if s[i - 1] < s[i]), None)
        if pivot == None:
            print("no answer")
        else:
            rs = next(i for i in range(len(s) - 1, 0, -1) if s[i] > s[pivot])
            s[pivot], s[rs] = s[rs], s[pivot]
            print(''.join(s[:pivot + 1] + list(reversed(s[pivot + 1:]))))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    T = int(input())

    for T_itr in range(T):
        w = input()

        result = biggerIsGreater(w)

        fptr.write(result + '\n')

    fptr.close()
