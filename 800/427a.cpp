#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    // vector<int> a(n);
    int pols = 0;
    int untreat = 0;
    for(int i =0 ; i < n; i++) {
        int stats; cin >> stats;
        if (stats < 0){
            // remove person 
            if (pols > 0) pols -= abs(stats);
            else untreat++;
        } else {
            // add ppl to pols
            pols += stats;
        }
    }
    cout << untreat << endl;
    return 0;
}
 