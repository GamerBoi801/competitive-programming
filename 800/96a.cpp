#include <bits/stdc++.h>
using namespace std;

int main() {
    string c; 
    cin >> c;

    int streak = 1; 
    for (int i = 1; i < (int)c.size(); i++) {
        if (c[i] == c[i-1]) {
            streak++;
            if (streak >= 7) {   
                cout << "YES\n";
                return 0;
            }
        } else {
            streak = 1;
        }
    }
    cout << "NO\n";
    return 0;
}
