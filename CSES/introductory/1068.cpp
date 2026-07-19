// https://cses.fi/problemset/task/1068/
#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
using namespace std;

int main() {
    long long n; cin >> n;
    cout << n << endl;
    while (n != 1) {
        if (n%2==0) n /= 2LL;
        else n = (3*n) + 1;
        cout << n << endl;
    }
    return 0;
}