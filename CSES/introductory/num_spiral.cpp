#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int x, y; cin >> y >> x;
        if (x == y) {
            cout << 1 + (2 * (x-1)) << endl;
        }
    }
    return 0;
}