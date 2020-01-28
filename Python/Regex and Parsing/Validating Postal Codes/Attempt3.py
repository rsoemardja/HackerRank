regex_integer_in_range = r"^[1-9]\d{5}$"
regex_alternating_repetitive_digit_pair = r"(.)(?=.\1)"

import re

print(bool(re.match(
    r'^'
    r'(?!.*(.).\1.*(.).\2)'
    r'(?!.*(.)(.)\3\4)'
    r'(?!.*(.).\5.\5)'
    r'[1-9]\d{5}'
    r'$', input()
    )))