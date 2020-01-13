def merge_the_tools(string, k):
    n = len(string)/k
    ts = [string[k*i:][:k] for i in range(n)]
    us = [''.join([t[i] for i in range(k) if not t[i] in t[:i]]) for t in ts]
    print '\n'.join(us)


if __name__ == '__main__':
    string, k = raw_input(), int(raw_input())
    merge_the_tools(string, k)