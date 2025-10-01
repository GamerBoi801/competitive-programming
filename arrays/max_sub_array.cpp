// finds max sum of a contiguous subarray
#include <iostream>
using namespace std;

int main() {
    int array[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};;
    
    int length = sizeof(array)/ sizeof(array[0]);
    int current_sum = array[0];
    int max_sum = array[0];

    for (int i = 1; i < length; i++) {
        current_sum = max(current_sum+ array[i], array[i]);
        max_sum = max(max_sum, current_sum);
    }
    cout << "MAx sum is: " << max_sum << endl;
    return 0;
}