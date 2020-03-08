#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the superReducedString function below.
def superReducedString(s):
    ns2=[]
    for i in s:
        if len(ns2)==0:
            ns2.append(i)
        elif ns2[-1]==i:
            ns2.pop()
        else:
            ns2.append(i)
    if len(ns2)==0:
        return "Empty String"
    return ''.join(ns2)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = superReducedString(s)

    fptr.write(result + '\n')

    fptr.close()
