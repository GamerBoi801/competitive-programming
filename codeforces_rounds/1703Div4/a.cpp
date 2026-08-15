#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string target = "YES";
        bool ok = true;
        for (int i = 0; i < 3; i++) {
            if (tolower((unsigned char)s[i]) != tolower((unsigned char)target[i])) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
