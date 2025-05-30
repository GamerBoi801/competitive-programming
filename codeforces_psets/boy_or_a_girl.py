#old solution
""""name = input('Name: ')

distinct = dict()
length = 0
for char in name:
    if char.isalpha():
        if char not in distinct:
            distinct[char] = 1
            length += 1
        else:
            pass
if (length % 2) == 0:
    print("CHAT WITH HER!")
else:
    print('IGNORE HIM!')

"""

#new solution
# Get input from the user
name = input('Name: ')

# Use a set to store distinct characters
distinct_characters = set(name)

# Count the number of distinct characters
length = len(distinct_characters)

# Determine gender based on the count
if length % 2 == 0:
    print("CHAT WITH HER!")  # Even count implies female
else:
    print("IGNORE HIM!")      # Odd count implies male
    