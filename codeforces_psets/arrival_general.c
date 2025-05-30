#include <stdio.h>

int main(void) {
    int n;
    scanf("%i", &n);

    int list[99];
    for(int i = 0; i < n; i++) {
        scanf("%i", &list[i]);
    }

    int count = 0;
    int max = list[0];
    int min = 0;
    for (int i =0; i < n; i++) {
        if (max < list[i])  {
            max = list[i];
        }
        else if (min > list[i])
        {
            min = list[i];
        }
    }
    max = list[0];
    min = list[n - 1];
    for(int j = 0; j < n; j++) {
            if (list[j] > list[j+1] || (max == list[0] && min == list[n-1])) {
                count += 1;
            }
        }

    printf("%i \n", count);
}