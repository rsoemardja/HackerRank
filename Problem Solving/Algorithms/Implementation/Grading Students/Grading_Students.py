#!/bin/python3

import os
import sys
import random 
import re
import sys

def gradingStudents(grades):
	for i in range(len(grades)):
		if(grades[i]>37):
			if((grades[i]%5) !=0):
				if(5-(grades[i]%5)<3):
					grades[i]+=5-(grades[i]%5)
	return (grades)

if __name__ == '__main__':
	fptr = open(os.environ['OUTPUT_PATH'], 'w')

	n = int(input().strip())

	grades = []

	for _ in range(n):
		grades_item = int(input())
		grades.append(grades_item)

	result = gradingStudents(grades)

	fptr.write('\n'.join(map(str, result)))
	fptr.write('\n')

	fptr.close()