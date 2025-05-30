#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    scanf("%d", &n);
    int count = 0;

    int grid[n][n];

    int half = n / 2;
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            scanf("%d", &grid[x][y]); 
            
            // checking for diagonals 
            if (x == y) {
                count += grid[x][y]; // sum main diagonal values
            }
            if (x + y == n - 1) {
                count += grid[x][y]; 
            }
            
            // middle column
            if (y == half) {
                count += grid[x][half];
            }
        }        
    }

    // adding middle row values 
    for (int y = 0; y < n; y++) {
        count += grid[half][y]; 
    }
    
    // subtracting the middle element by 3 times since it came in with both diagonals, and the row and the mid-column
    count -= (3 * grid[half][half]); 

    printf("%i\n", count); 
    return 0;
}