// https://codeforces.com/problemset/problem/263/A
#include <iostream>
using namespace std;


int main() {
    int n = 5;
    int arr[n][n];
    int c = 0;
    int row  = -1, col = -1;
    for(int i = 0 ; i < n; i++) {
        for(int j = 0 ; j < n; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    // middle index is where arr[2][2]
    c = abs(row - 2) + abs(col - 2);
    cout << c  << endl;

    return 0;
}