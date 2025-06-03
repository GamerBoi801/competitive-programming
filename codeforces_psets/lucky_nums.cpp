// https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <string>
using namespace std;

bool isLuckyNumber(const string& s) {
    for (char ch : s) {
        if (ch != '4' && ch != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    // lucky nums r +ive ints whose decimal rep contain only 4 &7
    string n;
    cin >> n;

    int count_luck = 0;
    for (char ch: n) {
        if (ch == '4' || ch == '7') {
            count_luck++;
        }
    }

    if (count_luck == 0) {
         cout << "NO" << endl;
         return 0;
    }
    
    string count_str = to_string(count_luck);
    if (isLuckyNumber(count_str)) {
        cout << "YES" << endl;

    } else {
        cout << "NO" << endl;
    
    }
    return 0;
}   