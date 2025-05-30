nums = input('enter (n m): ')
n, m = map(int, nums.split(' '))


a=0
b=0
#counter of solutions
sols = 0
# eq1   a^2+b = n
#       x^2+y=n
#eq2  a+b^2 = m

#eq1 in terms of b
eq1 = n - (a ** 2)
#eq2 in terms of a
eq2 = m - (b ** 2)

# since b = n - a^2 || b is not -ive 
# n-a^2 >= 0 -> a<= (n)^1/2

#loops thru all of the possible values of a
#plus one is since int does not return round the no. so  there is +1 
for a in range(0, int(n ** 0.5) + 1):
        b = n - (a**2) #calc b from the first equation
        if b >= 0:
            # now checks if the equations are satisfied or not
            if (a**2) +b == n and a + (b**2) == m:
                sols += 1

              
print(sols)