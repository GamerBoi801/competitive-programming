#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool even(int n) {
    return (n % 2 == 0);
}

int main() {
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << endl;
    }
    else if ((n != 1 && n <  4)) {
        cout << "NO SOLUTION" << endl;
    }else {
        bool first = true;
    for (int i = 2; i <= n; i += 2) {
        if (!first) cout << ' ';
        cout << i;
        first = false;
    }
    for (int i = 1; i <= n; i += 2) {
        if (!first) cout << ' ';
        cout << i;
        first = false;
    }
    cout << "\n";
    return 0;
    }}