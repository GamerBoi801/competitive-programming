#include <bits/stdc++.h>
using namespace std;


void split_fours(const vector<int>& a, vector<int>& l, vector<int>& r, int start_idx, int n) {
    int left = start_idx; 
    int right = n - 1;
    bool l_turn = true;
    
    while (left < right) {
        if (l_turn) {
            l.push_back(a[left]);
            l.push_back(a[right]);
        } else {
            r.push_back(a[left]);
            r.push_back(a[right]);
        }
        left++; 
        right--;
        l_turn = !l_turn; 
    } 
}

int main() {
    int n;
    cin >> n;
    
    // Check impossible cases immediately
    if (n % 4 == 1 || n % 4 == 2) {
        cout << "NO\n";
        return 0;
    }

    vector<int> a(n);
    for (int i = 1; i <= n; i++) a[i - 1] = i; 

    // Declare empty vectors (do not pre-size with n/2 when using push_back)
    vector<int> l, r;

    if (n % 4 == 0) {
        split_fours(a, l, r, 0, n);
    } else if (n % 4 == 3) {
        // Balance the first three numbers (1 + 2 = 3)
        l.push_back(1);
        l.push_back(2);
        r.push_back(3);
        
        // Pair up the remaining blocks of 4 starting from index 3 (value 4)
        split_fours(a, l, r, 3, n);
    }

    cout << "YES\n";
    cout << l.size() << "\n";
    for (int x : l) cout << x << " ";
    cout << "\n";
    
    cout << r.size() << "\n";
    for (int x : r) cout << x << " ";
    cout << "\n";

    return 0;
}
