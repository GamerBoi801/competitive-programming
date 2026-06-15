#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int cases = 0; cases <t; cases++) {
        int n; cin >> n;
        int a[n];
        // getting hums 
        int maxima, minima = 0;
        for(int i =0; i < n; i++) {
            cin >> a[i];
            if (i==0) {
                maxima = a[i]; minima=a[i];
            } else {
                if (a[i] > maxima) {
                    maxima = a[i];
                }else if (a[i] <minima) {
                    minima = a[i];
                }
            }
        }
        int k = maxima - minima  + 1;
        cout << k << endl;
    }
    return 0;
}
