// https://cses.fi/problemset/task/1072
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >>n; 
    // dimension of the chess board


    for(int k = 1; k <= n; k++) {
        // no. of ways 2 knights can be plced on a kxk chessbaord
        if (k == 1) {
            cout << 0 << endl;
            continue;
        } 


        // ok, so formula is C(k^2, 2) - no. of attacking pos collisions
        // Simplified: C(n, 2) = n * (n-1) / 2
        long long combos = (1LL * k * k * (k * k - 1)) / 2;
        
        // no. of attacking possibilities is that e check how many 2x2 and 2x3 recs fit in the whole block
        long long total_2x3 = (k-2) * (k-1);
        long long total_3x2 = (k-2) * (k-1);
        long long attacking_pos = 2* (total_2x3 + total_3x2);


        cout << combos - attacking_pos << endl;
    }
    return 0;
}