#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the queensAttack function below.
def queensAttack(n, k, r_q, c_q, obstacles):

    d={}

    for o in obstacles:
        d[str(o[0])+" "+str(o[1])]=True
    t=0

    for i in range(-1,2):
        for j in range(-1,2):
            if(not(i==0 and j==0)):
                r=r_q+i
                c=c_q+j
                while(r<=n and r>0 and c<=n and c>0 and (not d.get(str(r)+" "+str(c)))):
                    t+=1
                    r+=i
                    c+=j

    return t

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    r_qC_q = input().split()

    r_q = int(r_qC_q[0])

    c_q = int(r_qC_q[1])

    obstacles = []

    for _ in range(k):
        obstacles.append(list(map(int, input().rstrip().split())))

    result = queensAttack(n, k, r_q, c_q, obstacles)

    fptr.write(str(result) + '\n')

    fptr.close()
