// https://codeforces.com/problemset/problem/266/B
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int t; cin >> t;
    string s; cin >> s;
    int secs = 0;

        for(int _ = 0; _ < s.length() ; _++) {
            if(std::string(s[_], s[_+1]) == "BA" || std::string(s[_], s[_+1]) == "AB") {
                // swap B
                
            }
        }
    return 0;
}
