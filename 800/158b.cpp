// https://codeforces.com
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    int n;cin >> n;
    vector<int> s(n);
    vector<int> c(5);

    for(int i = 0; i<5; i++) c[i] = 0;

    for(int i = 0;i < n; i++) {
        cin >> s[i];
        c[s[i]]++;
    }
    int cx = 0;


    for(auto i = 4; i != 0; i--) {
        if (i == 4) {
            // if equal to 4
            cx += c[i];
        }   
        else if (i == 3) {
            int three = c[i];
            // with 3 only ones can come ]
            if (three <= c[1]) {
                c[1] -= three;
            } else {
                c[1] = 0; // if there are fewer ones than threes, all ones are consumed
            }
            // we minus 3's with 1s since once can slide with 3
            cx += three;
        } else if (i == 2) {
            // so n/2 if odd then +1 remains of 2 then fit with rem ones or another bus
            int two = c[i];
            
            cx += two / 2; 
            if (two % 2 == 0) {
                // even num ppl can come in this ride
                
            } else {
                cx += 1; // It needs its own taxi
                // it leaves 2 empty seats, which can absorb up to two 1s
                c[1] = max(0, c[1] - 2); 
            }
        } else if (i == 1) {
            int one = c[i];
            if (one > 0) {
                cx += (one + 3) / 4; // round up division to pack them into taxis of 4
            }
        }
    }
    
    cout << cx << endl;
    return 0;
}
