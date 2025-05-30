// Problem Link: https://codeforces.com/problemset/problem/151/A
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_litres = k * l;
    int toasts = total_litres / nl;
    int total_limes = c * d;
    int salt = p / np;

    int minimum = min(toasts, min(total_limes, salt));
    minimum = minimum / n; // max no. of toasts per friend
    cout << minimum; 
    return 0;
}