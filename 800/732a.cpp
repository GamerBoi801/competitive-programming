// https://codeforces.com/problemset/problem/732/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r; cin >> k >> r;
    // k min price of shovel , hmm
    // r is the 1 burle coins this person has 
    int q = 1;
    while(true) {
        int cost = q * k;
        int cahnged_cost = cost - r;
        if (cahnged_cost % 10 == 0 || cost % 10 == 0) {
            break;
        } else {
            q++;
        }
    }
    cout << q << endl;
    return 0;
}
