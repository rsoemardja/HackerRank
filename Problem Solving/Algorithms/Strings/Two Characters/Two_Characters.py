#!/bin/python3

import math
import os
import random
import re
import sys
from itertools import combinations

# Complete the alternate function below.
def alternate(s):
    if len(s) <= 1:
        return 0
    
    # unique set of characters
    unique = set(s)
    longest = 0
    
    # find all possible pairs
    for pair in combinations(unique, 2):
        matches = [c for c in s if c in pair]
        # check if matched string alternates
        if all(c1 != c2 for c1, c2 in zip(matches, matches[1:])):
            longest = max(longest, len(matches))
    
    return longest
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    l = int(input().strip())

    s = input()

    result = alternate(s)

    fptr.write(str(result) + '\n')

    fptr.close()
