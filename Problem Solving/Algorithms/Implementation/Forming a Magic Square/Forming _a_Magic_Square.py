#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the formingMagicSquare function below.
def formingMagicSquare(s):
    s = []
for s_i in range(3):
   s_t = [int(s_temp) for s_temp in input().strip().split(' ')]
   s.append(s_t)
#  Print the minimum cost of converting 's' into a magic square

def rotateGrid(grid):
    return [[x[i] for x in grid[::-1]] for i in range(len(grid[0]))]

def flipGrid(grid):
    for i,g in enumerate(grid):
        grid[i] = grid[i][::-1]
    return grid

grid = [[4,9,2],
      [3,5,7],
      [8,1,6]]


cost = 1000
for i in range(8):
    #flip
    if i == 4:
        grid = flipGrid(grid)
    else:
        #rotate
        grid = rotateGrid(grid)
    
    r_s = [item for sublist in s for item in sublist]
    r_g = [item for sublist in grid for item in sublist]
    
    distance = 0
    for i,j in zip(r_s,r_g):
        distance += abs(i-j)
    
    if distance < cost:
        cost = distance;
    
print (cost)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = []

    for _ in range(3):
        s.append(list(map(int, input().rstrip().split())))

    result = formingMagicSquare(s)

    fptr.write(str(result) + '\n')

    fptr.close()
