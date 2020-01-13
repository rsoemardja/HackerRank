def merge_the_tools(string, k):
    s = [string[(i+k):((i+l)*k)] for i in range(len(string)//k)]
    print('\n'.join([''.join([x for i, x in enumerate(sx) if sx.in dex(x) == i]) for sx in s]))

if __name__ == '__main__':
    string, k = raw_input(), int(raw_input())
    merge_the_tools(string, k)
    