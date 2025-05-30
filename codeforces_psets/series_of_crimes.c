#include <stdio.h>

int main(void) {
    int n, m; //declaring values for rows(n) and columns(m)
    scanf("%d %d", &n, &m); // reads the dimensions of the grid

    char grid[n][m]; // 2D array grid
    int x[3], y[3]; //arrays to store the location of the robbed districts
    //stores no. of robbed districts
    int count = 0;  

    for (int i = 0; i < n; i++) {
        for(int  j = 0; j < m; j++) {
            scanf(" %c", &grid[i][j]);

            if (grid[i][j] == '*') {
                x[count] = i + 1;  //since answer is indented we add 1 to the locations
                y[count] = j + 1;

                count++;
            }
        }
    }

    int x4, y4;

    //determine x4
    if (x[0] == x[1]) {
        x4 = x[2]; // if the first 2 are the same, then 3rd one is unique
    } 
    else if (x[0] == x[2]) {
        x4 = x[1]; // if first and third are the same , second in unique
    }
    else {
        x4 = x[0]; //if 2nd and 3rd are the same then , first is unique
    }

    //Determine y4
    if (y[0] == y[1]) {
        y4 = y[2]; // if first 2 are the same. 3rd is unique 
    }
    else if (y[0] == y[2]) {
        y4 = y[1]; // if first 2 and 3rd are same, 2nd is un
    }
    else {
        y4 = y[0]; // if 2nd and 3rd are the same, first is unique
    }
    printf("%d %d \n", x4, y4);
    return 0;

}