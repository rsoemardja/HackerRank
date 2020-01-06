#!/usr/bin/env python3

# Python: Division

def int_division(a, b):
    return a // b

def float_division(a, b):
    return a / b


if __name__ == "__main__":
    a = int(input())
    b = int(input())

    print("{}".format(int_division(a, b)))
    print("{}".format(float_division(a, b)))

