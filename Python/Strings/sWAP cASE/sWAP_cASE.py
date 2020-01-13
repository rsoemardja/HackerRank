def swap_case(s):
    t = ''
    for char in s:
        if char.islower():
            t += char.upper()
        else:
            t += char.lower()
    return t

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)