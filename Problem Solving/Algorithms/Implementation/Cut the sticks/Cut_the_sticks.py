#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the cutTheSticks function below.
def cutTheSticks(arr):
    count = 0
    ls = []

    while(arr!=[]):
        mi = min(arr)
        count = len(arr)
        arr = list(map(lambda x:x-mi,arr))
        arr = [x for x in arr if x > 0]
        ls.append(count)
    return ls

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = cutTheSticks(arr)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
