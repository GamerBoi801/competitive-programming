#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    for(int cases = 0; cases < t; cases++) {
        int n; cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        bool match = true;
        for(int i = 1; i < n; i++) {
            if (abs(a[i] - a[i-1]) > 1) {
                match = false;
                break;
            }
        }
        
        if (match) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}