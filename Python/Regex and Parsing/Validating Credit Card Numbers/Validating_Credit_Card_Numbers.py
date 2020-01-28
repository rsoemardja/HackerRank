import re 

for _ in range(int(input())):
    s = input()
    is_valid = re.search(r'^[456]\d{3}(\d{12}|(-\d{4}){3})$', s)
    is_valid = is_valid and not re.search(r'(\d)(?:\1){3,}', s.replace('-', ''))
    print('Valid' if is_valid else 'Invalid')