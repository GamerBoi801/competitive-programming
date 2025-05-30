import sys

#no. of problems
try: 
    n = int(input('Enter no. of problems: '))
except ValueError:
    sys.exit(1)

#for problem_solving
counter = 0

#for each problem
for i in range(n):
    #inputs confidence levels
    try:
        p, v, t = map(int, input().split())

    except ValueError:
        sys.exit(1)

    #total confidence 
    sure = p + v + t
    
    if sure >= 2:
        counter += 1

print(counter)