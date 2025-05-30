#include <stdio.h>

int main(void) {
    //getting input for the position position and the min score
    int scores[50];
    int qualified = 0;
    int positions, k;
    scanf("%i %i", &positions, &k);

    for(int i = 0; i < positions; i++) {
        scanf("%i", &scores[i]);
    }
    int k_th_score = scores[k-1];

    for (int i = 0; i < positions; i++) {
        if (scores[i] >= k_th_score && scores[i] > 0) {
            qualified++;
        }
    }

    printf("%i \n", qualified);
    return 0; 
}