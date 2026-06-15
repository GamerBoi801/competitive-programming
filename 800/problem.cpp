// problem statement
/*  Farmer John is organizing a dance show for his cows. He has N cows, each with a unique height. The cows are numbered from 1 to N, and Farmer John wants to arrange them in a line for the performance. However, there are certain constraints:
The cows can only be arranged in non-decreasing order of height.
Each cow can only dance with another cow if their height difference is at most K.
Your task is to determine the maximum number of cows that can participate in the dance show while respecting these constraints.
Input
The first line contains two integers, N (1 ≤ N ≤ 100) and K (1 ≤ K ≤ 1000) — the number of cows and the maximum height difference allowed.
The second line contains N integers representing the heights of the cows. Each height is unique and in the range from 1 to 1000.
Output
Output a single integer — the maximum number of cows that can participate in the dance show.*/

#include <iostream>
using namespace std;

int main() {
    // Getting input
    int n, k;
    cin >> n >> k;
    int cows[n];

    for (int i = 0; i < n; i++) {
        cin >> cows[i];
    }

    // Sort the array in ascending order
    for (int i = 0; i < n - 1; i++) { // Bubble sort fixed
        for (int j = 0; j < n - i - 1; j++) {
            if (cows[j] > cows[j + 1]) {
                int temp = cows[j];
                cows[j] = cows[j + 1];
                cows[j + 1] = temp;
            }
        }
    }

    // Two-pointer logic to find maximum number of cows
    int front_ptr = 0;
    int last_ptr = 0;
    int count = 0;

    while (last_ptr < n) {
        int diff = cows[last_ptr] - cows[front_ptr];
        
        if (diff <= k) {
            // Update count with the current range size
            int current_count = last_ptr - front_ptr + 1;
            if (current_count > count) {
                count = current_count;
            }
            last_ptr++; // Move last pointer forward
        } else {
            front_ptr++; // Move front pointer forward to reduce range
        }
    }

    cout << count << "\n"; // Output the maximum number of cows that can participate
}
