#include <stdio.h>

int main(void) {
    int h = 4;
    int j;
    for (int i = 0; i< h; i++)
    {
        for(int j = 0; j < h+1; j++)
        {
            printf('#');
        }
        printf('\n');
    }
    return 1;
}
