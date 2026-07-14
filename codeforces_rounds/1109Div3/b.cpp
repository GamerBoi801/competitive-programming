#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n; i++) {
            cin >> a[i];
        }
        long long current = 0;
        bool ok = true;
        
        for(int i  = 1 ; i <= n; i++) {
            current += a[i-1];
            long long need = 1LL * i * (i+1) / 2;
            if (current < need) {
                ok = false;
                break;
            }
        }
        if (ok == true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}