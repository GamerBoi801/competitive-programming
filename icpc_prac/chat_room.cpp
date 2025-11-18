// https://codeforces.com/problemset/problem/58/A
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string hello = "hello";
    int j = 0;  // index for hello

    for (int i = 0; i < (int)s.length() && j < (int)hello.length(); i++) {
        if (s[i] == hello[j]) {
            j++;
        }
    }

    if (j == (int)hello.length()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
