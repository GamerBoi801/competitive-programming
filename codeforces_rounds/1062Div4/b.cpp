#include <bits/stdc++.h>
using namespace std;

map<char, int> conv(string s) {
    map<char, int> a;
    for (char c : s) {
        a[c]++;   
    }
    return a;
}

int main() {
    int q; 
    cin >> q;
    while (q--) {
        int n; 
        cin >> n; // unused
        string s, t; 
        cin >> s >> t;

        if (s.length() != t.length()) {
            cout << "NO\n";
            continue;
        }

        if (conv(s) == conv(t)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
