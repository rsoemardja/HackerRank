import numpy

dimensions = tuple(map(int, input().split()))
print(numpy.eye(dimensions[0], dimensions[i], k=0))