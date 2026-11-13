// https://codeforces.com/problemset/problem/2276/B
#include <bits/stdc++.h>
using namespace std;

// string  compress(string s) {
//     if (s.empty()) return "";

//     string result  = "";

//     result += s[0];

//     for(int i = 1 ; i < s.length();i++) {
//         if (s[i] != s[i-1]) {
//             result += s[i];
//         }
//     }
//     return result;
// }

// bool check(string s) {
//     // checks for 101 alts
//     int n = s.length();
//     for(int i = 1; i < n; i++) {
//         if (s[i] == s[i-1]) {
//             return false;
//         }
//     }
//     return true;
// }

// void test() {
//     string s; cin >> s;
//     string org_compressed = compress(s);
//     for(int i = 1; i < s.length()-1; i++){
//         string temp = s;
//         // flips char
//         temp[i] = (temp[i] == '0') ? '1' : '0';

//         // compress the unmodified string


//     }
// }

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s; int n = s.length();
        bool alt_triplet = false;
        bool ident_triplet = false;
        for(int i = 1; i < n-1; i++) {
            if (s[i] != s[i-1] && s[i] != s[i+1]) {
                alt_triplet = true;
            } 
            if(s[i] == s[i-1] && s[i] == s[i+1]) {
                ident_triplet = true;
            }
        }
        cout << 1 + alt_triplet + ident_triplet << endl;
    }
    return 0;
}
