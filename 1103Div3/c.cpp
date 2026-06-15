// https://codeforces.com/contest/2236/problem/C
#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for(int cases = 0; cases <t; cases++) {
        int a, b, k; cin >> a >> b >> k
        ;int maxima = max(a, b);
        int minima = min(a, b);
        int count = 0;
        int found = false;
        while (true) {
            if (maxima == minima) {
                found = true;
                break;
            }
            if (maxima % minima == 1) {
                count++;
                found = true;
                break;
            }
            do {

            } while (maxima)
        }
        cout << count << endl;
    }
    return 0;
}
