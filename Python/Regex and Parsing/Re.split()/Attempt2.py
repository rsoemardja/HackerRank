import re
print(*filter(None, re.split('[\.,]', input())), sep = '\n')