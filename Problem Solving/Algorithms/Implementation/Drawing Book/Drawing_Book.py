#!/bin/python3

import os
import sys

#
# Complete the pageCount function below.
#
def pageCount(n, p):
    #
    # Write your code here.
    #
    front = (p - (p % 2)) * 0.5
    back = (n - p + ((n + 1) % 2)) * 0.5
    
    return int(min(front, back))

    n = int(input())

    p = int(input())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
