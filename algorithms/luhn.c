#include <stdio.h>
#include <string.h>

int main(void) {
    char str[50];
    printf("Enter a single word: ");
    scanf("%49s", str);

    int len = strlen(str);
    int total_sum = 0;

    // Luhn Algorithm: Process right-to-left
    for (int i = 0; i < len; i++) {
        // Convert character digit to actual integer
        int c = str[len - 1 - i] - '0'; 

        // Double every second digit starting from the right
        if (i % 2 == 1) {
            int doubled = c * 2;
            if (doubled > 9) {
                total_sum += (doubled - 9); // Sum the digits (e.g., 14 -> 1 + 4 = 5)
            } else {
                total_sum += doubled;
            }
        } else {
            total_sum += c;
        }
    }

    // Check if the total sum ends in 0
    if (total_sum % 10 == 0) {
        // Extract the first two digits for network identification
        int result = ((str[0] - '0') * 10) + (str[1] - '0');

        if (result == 34 || result == 37) {
            printf("AMEX\n");
        } else if (result >= 51 && result <= 55) {  // Fixed logic bug: changed || to &&
            printf("MASTERCARD\n");
        } else if ((result / 10) == 4) {
            printf("VISA\n");
        } else {
            printf("VALID CARD\n");
        }
    } else {
        printf("INVALID\n");
    }

    return 0;
}
