#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int best = 0;
        int cur = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                cur++;
            } else {
                best = max(best, (cur + 1) / 2);
                cur = 0;
            }
        }
        best = max(best, (cur + 1) / 2); 

        cout << best << "\n";
    }
    return 0;
}
