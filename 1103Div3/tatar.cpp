
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    for(int cases = 0; cases <t; cases++) {
        int n; cin >> n; // len of str
        int k; cin >> k; // k
        
       string a; cin >> a;
       vector<int> count(k, 0); 
       bool found = false;
        
       for(int i = 0; i < n; i++) {
        if(!(a[i] != '1')) {
            count[i % k] = count[i % k] + 1;
        }
       }

       for(int i =0; i < k; i++) {
        if (count[i] % 2 != 0) {
            found = true;
            break;
        }
       }
       if (!found) {
           cout << "YES" << endl;
        } else {
           cout << "NO" << endl;
       }
    }
    return 0;
}