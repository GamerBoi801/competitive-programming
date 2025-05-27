#include <iostream>
using namespace std;

int main() {
    int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2}; 
    int n = sizeof(arr);
    int best = 0;

    //O(n^3) solution
    for (int i = 0; i< n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            best = max(best, sum);
        }
    }

    // o(n^2) solution
    for (int i  = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++){
            sum += arr[j];
            best = max(best, sum);
        }
    }

     // O(n) solution
     int best = 0, sum = 0;
     for (int k = 0; k < n;k++) {
        sum = max(arr[k], sum + arr[k]);    
        best = max(best, sum);
     }
}