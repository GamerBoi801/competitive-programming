// https://codeforces.com/problemset/problem/2240/A
#include <bitset>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string binary(int n) {
    // converts a num to bin as a string
    string bin = bitset<32>(n).to_string();
    return bin;
}

int popcorn(string s) {
    int a= 0;
    for (auto str : s) {
        if (s == "1") {
            a++;
        }
    }
    return a;
}

int main() {
    int t; cin >> t;
    for(int i = 0 ; i < t; i++) {
        int n, k; cin >> n >> k;

    }    
    return 0;
}
