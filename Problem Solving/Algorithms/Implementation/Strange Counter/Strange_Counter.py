#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the strangeCounter function below.
def strangeCounter(t):
    cycle = math.ceil(math.log(((t/3)+ 1), 2))
    print("cycle = ", cycle)
    cycle_end = 3*((2**cycle) - 1)
    print("cycle_end = ", cycle_end)
    value = cycle_end - t + 1
    print("value = ", value)
    return value

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    result = strangeCounter(t)

    fptr.write(str(result) + '\n')

    fptr.close()
