#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    // time starts 20:00 -> 0000
    int mins_left = (4 * 60 ) - k; // time needed to solve problems
    int probs = 0;
    
    for(int i =1; i <= n; i++) {
        mins_left -= 5*i;
        if (mins_left < 0) {
            break;
        } 
        probs++;
    }
    cout << probs << endl;
    return 0;
}
