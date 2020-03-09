#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the caesarCipher function below.
def caesarCipher(s, k):
    string = "abcdefghijklmnopqrstuvwxyz"
    ans = ""
    for char in s:
        flag = False
        if char.isalpha():
            if(char.isupper()):
                char = char.lower()
                flag = True
            temp = string[(string.index(char) + (k % 26)) % 26]
            if(flag):
                temp = temp.upper()
            ans += temp
        else:
            ans += char
    return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    k = int(input())

    result = caesarCipher(s, k)

    fptr.write(result + '\n')

    fptr.close()
