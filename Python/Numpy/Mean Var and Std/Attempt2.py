import numpy

n,m = map(int, input().split())
b = []
for i in range(n):
    a = list(map(int, input().split()))
    b.append(a)

b = numpy.array(b)

numpy.set_printoptions(legacy='1.13')
print(numpy.mean(b, axis = 1))
print(numpy.var(b, axis = 0))
print(numpy.std(b))