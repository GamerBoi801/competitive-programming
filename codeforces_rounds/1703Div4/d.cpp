#include <bits/stdc++.h>
#include <string>
#include <unordered_set>
using namespace std;

bool pairings(string target, const unordered_set<string> &s) {
        int len = target.length();
        if (len <= 1) {
            return false;
        }
            // looping over all possible combos of substr of  the target 
            for(int i = 1; i < len; i++) {
                string sj = target.substr(0, i);
                string sk = target.substr(i);
                
                // checking whetehr the substring is in the list
                bool sj_exists = s.count(sj);
                bool sk_exists = s.count(sk);
                
                if (sk_exists && sj_exists) {
                    return true;
                } 
            }
        return false; 
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<string> s(n); 
        unordered_set<string> s_set; // stores unique elements in the set
        for(int str = 0 ; str < n; str++){
            cin >> s[str];
            s_set.insert(s[str]);
        }
        string bin = "";

        // looping over all the strings
        for(int i = 0; i < n; i++) {
            if (pairings(s[i], s_set)) {
                bin += "1";
            } else {
                bin += "0";
            }
        }

        cout << bin << endl;

    }
    return 0;
}
