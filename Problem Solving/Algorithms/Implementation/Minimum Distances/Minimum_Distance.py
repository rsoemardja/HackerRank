#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumDistances function below.
def minimum_distance(a):
    dist =[]
    for i in range(len(a)-1):
        if a[i] in a[i+1:]:
            x = a[i+1:].index(a[i])+1
            dist.append(x)
    if len(dist)>0:
        return min(dist)
    return -1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    a = list(map(int, input().rstrip().split()))

    result = minimumDistances(a)

    fptr.write(str(result) + '\n')

    fptr.close()
