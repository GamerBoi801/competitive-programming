//https://codeforces.com/problemset/problem/271/A
#include <iostream>
#include <set>
using namespace std;

bool check_yr(int year) {
    set<int> digits;

    while (year > 0) {
    int d = year % 10;
    if (digits.find(d) != digits.end()) {
        return false;
    }    digits.insert(d);
    year /=10;
    
    }
    return true;
    
}

int main() {
    int y = 0;
    cin >> y;

    y++;
    while(!check_yr(y)) {
        y++;
    }
    cout << y << endl;

    return 0;
}