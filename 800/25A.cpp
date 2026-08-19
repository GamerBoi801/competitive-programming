#include <bits/stdc++.h>
#include <iostream>
using namespace std;

inline bool eve(int n) { return n % 2 == 0;}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int pos = 0;

    for(int i = 0 ; i < n; i++) {
        bool found = false;
        cin >> a[i];
        if (i > 0) {
            if (eve(a[i-1]) != eve(a[i]) && !found) {
                pos =  i;
                found = true;
                continue;
            }
        }
    }
    cout << pos << endl;
    return 0;
}
