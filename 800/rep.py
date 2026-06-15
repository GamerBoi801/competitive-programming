str = input()
hash = set(str)

for char in str:
    if char not in hash:
        hash.