#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        map<char, int> hashmap;
        for(char c : s) {
            hashmap[c]++;
        }
        int ballons = 0;

        for (const auto& [key, val] : hashmap) {
            // if val == 1, then *2
            // if val >= 2 then += (val-1)
            if (val == 1) {
                ballons += 2;
            } else if (val >= 2) {
                ballons += 2;
                ballons += (val - 1);
            }
        }
        cout << ballons << endl;
    }
    return 0;
}