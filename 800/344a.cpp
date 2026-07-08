// https://codeforces.com/problemset/problem/344/A
#include <istream>
#include <string>

#include <iostream>
#include <vector>
using namespace std;

// bool check(string prior, string latter) {
//     // returns whether the 2 mags attracr or not
//     return (prior[1] == latter[0]);
// }
int main() {
    // int n; cin >> n;
    // int pairs = 1;
    // string prev, now = "";
    // for(int i = 0 ; i < n; i ++) {
        
    //     }        
    // }
    // cout << pairs << endl;

    int n; cin >> n;
    int c = 1;
    vector<string> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
         
            if (i > 0 && a[i] != a[i-1]) {
                // they repel
                c++;
            }
        
    }
    cout << c << endl;
    return 0;
}
