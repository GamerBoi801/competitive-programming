

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2; cin >> s1 >> s2;
    string temp= "";

    for(int i = 0 ; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            temp += "1";
        } else {
            temp += "0";
        }
    }
    cout << temp << endl;
    return 0;
}
