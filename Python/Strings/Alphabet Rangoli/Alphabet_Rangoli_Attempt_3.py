def print_rangoli(size):
    start = ord("a")
    end = start + (size - 1)

    width = size * 4 - 3

    for i in range(size):
        chars = [chr(c) for c in range(end, start - 1, -1)]
        l = chars[:i] + [chars[i]] + list(reversed(chars[:i]))
        print("-".join(l).center(width, "-"))

    for i in reversed(range(size - 1)):
        chars = [chr(c) for c in range(end, start - 1, -1)]
        l = chars[:i] + [chars[i]] + list(reversed(chars[:i]))
        print("-".join(l).center(width, "-"))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)