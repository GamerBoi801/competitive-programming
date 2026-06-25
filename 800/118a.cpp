#include <iostream>
// #include <vector>
#include <string>
using namespace std;

bool check_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c== 'o' || c == 'u');
}
int main() {
    string s; cin >> s;
    string t= "";
    for(int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
        if (!check_vowel(s[i])) {
            t += ".";
            t  += s[i];
        } else {
            conti
            nue;
        }
    }
    cout << t << endl;
    return 0;
}
