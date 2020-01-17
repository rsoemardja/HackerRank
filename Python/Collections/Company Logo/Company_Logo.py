import math
import os
import random
import re
import sys
import collections

if __name__ == "__main__":
    s = input().strip()
    count_object = collections.Counter(s)

    output = sorted(count_object.items(), key=lambda x: (-x[1], x[0]))
    for i in range(0, 3):
        print("{} {}".format(output[i][0], output[i][1]))