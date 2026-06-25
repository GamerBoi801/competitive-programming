#include <iostream>
#include <string> 
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

 
    string temp = s; 
    int len = s.length();

    for(int i = 0; i < len; i++) {
        temp[i] = s[len - i -1];
    }
    if (temp == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
