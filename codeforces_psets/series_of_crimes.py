user_input = input('')
n, m = map(int, user_input.split(' '))
# n row m cols
row, col = n, m

#initalizes the rows and columns of the grid
grid = [[None for _ in range(col)] for __ in range(row)]
options = ['*', '.']
robbed = options[0]
n_robbed = options[1]
rectangle_cords = []

for x in range(row):
    stripped = map(str, i.split(''))
    #iterated thru the columns
    for y in range(col):
        i = input(': ').strip()
        rectangle_cords.append()
        #same row, diff columns, meaning (x is same)

         #since cords are 1st indexed
#extract x and y cord separately

x_cords = [cord[0] for cord in rectangle_cords]
y_cords = [cord[1] for cord in rectangle_cords]

#finds unique x and y cords
unique_x = set(x_cords)
unique_y = set(y_cords)

#fourth cord will be formed by taking the unique values 
x4 = sum(unique_x) - sum(x_cords)
y4 = sum(unique_y) - sum(y_cords)

print(f'{x4} {y4}')