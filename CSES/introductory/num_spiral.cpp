#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long y, x;
    cin >> y >> x;
    
    long long n = max(y, x);
    
    if (n % 2 == 1) {
        // Odd layer: n² at (1, n), goes down then left
        if (x == n) {
            // Right vertical edge: going down from (1, n)
            cout << n * n - (y - 1) << "\n";
        } else {
            // Bottom horizontal edge: going left from (n, n)
            cout << n * n - (n - 1) - (n - x) << "\n";
        }
    } else {
        // Even layer: n² at (n, 1), goes right then up
        if (y == n) {
            // Bottom horizontal edge: going right from (n, 1)
            cout << n * n - (x - 1) << "\n";
        } else {
            // Right vertical edge: going up from (n, n)
            cout << n * n - (n - 1) - (n - y) << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}