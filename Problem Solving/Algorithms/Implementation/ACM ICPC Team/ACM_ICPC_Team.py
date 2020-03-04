#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the acmTeam function below.
def acmTeam(topic):    
    max_topics = []
        
    for i in range( len(topic) ):
        for j in range( i+1, len(topic) ):
            a = list( str( int(topic[i]) + int(topic[j]) ) )
            max_topics.append( (a.count('2') + a.count('1')) )
                        
    return [ max(max_topics), max_topics.count(max(max_topics)) ]
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    topic = []

    for _ in range(n):
        topic_item = input()
        topic.append(topic_item)

    result = acmTeam(topic)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
