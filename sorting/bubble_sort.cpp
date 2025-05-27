#include <iostream>
using namespace std;

int main() {
    int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2}; 
    int n = sizeof(arr);

    // O(n^2) Bubble Sort
    for (int i = 0; i < n; i++){
        for(int j = 0;j < n; j++) {
            if (arr[j] > arr[j+1]) {
                //swap both places
                swap(arr[j], arr[j+1]);
            }
        }
    }
}