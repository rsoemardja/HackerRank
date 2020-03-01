#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the cavityMap function below.
def cavityMap(G):
    for r in range(1, len(G) - 1):
        R = list(G[r])
        for c in range(1, len(R) - 1):
            p = R[c + 1], G[r + 1][c], R[c - 1], G[r - 1][c]
            if all(map(lambda a: a != 'X' and a < R[c], p)):
                R[c] = 'X'
        G[r] = ''.join(R)
    return(G)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    grid = []

    for _ in range(n):
        grid_item = input()
        grid.append(grid_item)

    result = cavityMap(grid)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
