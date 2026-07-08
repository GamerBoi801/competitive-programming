// https://codeforces.com/contest/2241/problem/A

#include <iostream>
using namespace std;

// bool chose_num(int x, int y, int z) 

int main() {
    int t; cin >> t;
    for(int i = 0 ; i < t; i++) {
        int x, y; cin >> x >> y;
        
        if (x == y) {
            cout << "YES" << endl;
            continue;
        } else if (x % y == 0) {
            cout << "YES\n";
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
