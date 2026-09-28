// https://codeforces.com/problemset/problem/158/B
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    int n;cin >> n;
    vector<int> s(n);
    int su = 0;
    for (int i=0; i < n; i++) {
        cin >> s[i];
        su+= s[i];
    }
    cout << (su/n) +1 << endl;
    return 0;
}
