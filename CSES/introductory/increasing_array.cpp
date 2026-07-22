#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    vector<long long> a(n);
    long long  moves = 0;
    for(int j = 0 ; j < n ; j++) cin >> a[j];
    for(int i = 0 ; i+ 1 < n; i++) {
        if (a[i] > a[i+1]) {
            moves+= a[i] - a[i+1];
            a[i+1] = a[i];
        }
    }
    cout << moves << endl;
    return 0;
}