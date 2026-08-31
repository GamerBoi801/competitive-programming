#include <bits/stdc++.h>
#include <sched.h>
using namespace std;

int main() {
    int s, n; cin >> s >> n;
 // s strength and n is no. of dragons
     vector<int> strength(n);
    vector<int> bonus(n);

    for(int i = 0 ; i <n; i++) {
        cin >> strength[i];
    }
    for(int i = 0 ; i < n; i++){
        cin >> bonus[i];
    }

    if (s <= strength[0]) {
        // lose
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }

    return 0;
}
