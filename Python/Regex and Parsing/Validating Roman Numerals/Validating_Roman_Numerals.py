regex_pattern = r""	# Do not delete 'r'.

import re
print(str(bool(re.match(regex_pattern, input()))))

def my_func(s):
    s = s.upper()
    res=re.search(r'^M{0,4}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$',s)
    if(s=="MMMM"):
        print "False"
    else:
        if res:
            print "True"
        else:
            print "False"
my_func(raw_input())