// https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    for (int i = 0; i < x.length(); i++) {
        char cx = tolower(x[i]);
        char cy = tolower(y[i]);

        if (cx < cy) {
            cout << -1 << endl;
            return 0;
        } else if (cx > cy) {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}
