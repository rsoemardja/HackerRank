"""
n=int(raw_input())
for i in range(0,n):
    tmp_str=raw_input()
    len_tmp_str=len(tmp_str)
    if(len_tmp_str!=10):
        ##print "LENGTH PROBLEM"
        print "NO"
    elif(tmp_str[0]!="7" and tmp_str[0]!="8" and tmp_str[0]!="9"):
        ##print "START PROBLEM"
        print "NO"
    else:
        check=1
        for i in tmp_str:
            if(i>="0" and i<="9"):
                continue
            else:
                check=0
                break
        if(check==1):
            print "YES"
        else:
            ## "NUMBER PROBLEM"
            print "NO"
"""
