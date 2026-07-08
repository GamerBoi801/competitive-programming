// https://codeforces.com/problemset/problem/266/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t; cin >> n >> t;
    vector<char> a(n);
    
    for(int k=0; k < n; k ++) {
        cin >> a[k];
    }
    // vector<char> copy = a;
    for(int i = 0 ; i < t; i++ ) {
        // time loop
        // scan the queue
        int j = 0;
        while ( j < n-1) {
        if (a[j] == 'B' && a[j+1] == 'G') {
            // swap them
            char temp = a[j];
            a[j]  =a[j+1];
            a[j+1] = temp;

            j+= 2;
        } else {
            j++;
        }
    }

        
    }
    for(auto x : a) {
        cout << x;
    } cout << endl;
    return 0;
}
