#!/bin/python3

import math
import os
import random
import re
import sys

def if_else(n):

    if n % 2 == 1:
        print("Weird")
    else:

        if n > 20:
            print("Not Weird")

        elif n > 5:
            print("Weird")

        elif n > 1:
            print("Not Weird")

if __name__ == '__main__':
    n = int(input())
    if_else(n)
