import re

n = int(input())
for _ in range(n):
    if re.fullmatch('[789]\d{9}', input()) != None:
        print('YES')
    else:
        print('NO')