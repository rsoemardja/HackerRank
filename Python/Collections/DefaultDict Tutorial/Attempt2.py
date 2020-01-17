import collections as b

n, m = (int(x) for x in input().split())

A = b.defaultdict(list)

for i in range(n):
    lett = input()
    A[lett].append(i+1)
    
for _ in range(m):
    lett = input()
    if lett in A:
        print(*A[lett])
    else:
        print(-1)