// https://codeforces.com/problemset/problem/25/A
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    int eve_c = 0; int odd_c = 0;
    int eve_i = -1; int  odd_i = -1;
    for(int i = 0 ; i < n; i++) {
        cin >>a[i];

    if (a[i] % 2 == 0) {
        eve_c++;
        if (eve_i==-1) eve_i = i+1;
    } else {
        odd_c++;
        if (odd_i == -1) odd_i = i+1;
    }
    }
    if (eve_c > odd_c) cout << odd_i << endl;
    else cout << eve_i << endl;


    return 0;
}
