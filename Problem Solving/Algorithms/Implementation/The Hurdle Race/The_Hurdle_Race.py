#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hurdleRace function below.
def hurdleRace(k, height):
	maxi = max(height)
	if(maxi>k):
		return maxi-k
	return 0

if __name__ == '__main__':
	fptr = open(os.environ['OUTPUT_PATH'], 'w')

	nk