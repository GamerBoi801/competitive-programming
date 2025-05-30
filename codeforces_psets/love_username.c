#include <stdio.h>

int main(void) {
    // no. of competitions
    int n = 0;
    scanf("%i", &n);
    int scores[1000];
    int count = 0;

    //scores the scores
    for( int num = 0; num < n; num++) {
        scanf("%i", &scores[num]);
    }   
    int max = scores[0];
    int min = scores[0];
    for (int i = 0; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
            count += 1;
        }
        else if (scores[i] < min) {
            min = scores[i];
            count += 1;
        }
    }
    
    printf("%i \n", count);
    return 0;
}