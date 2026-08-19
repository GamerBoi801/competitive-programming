#include <bits/stdc++.h>
#include <ostream>
using namespace std;

void print_body(int m) {
    for(int j = 0; j < m; j++) {
        cout << "#";           
    } cout << endl;
}

int main() {
    int n, m; cin >> n >> m;
    // n is odd
    bool right = true;
    for(int i = 0 ; i < n; i++) {
        //  if even print body
        if(i % 2 == 0) {
            print_body(m);
        } else if (right) {

            for(int j = 0; j < m; j++) {
                if (j != m-1) {
                    cout << ".";
                } else {
                    cout << "#" << endl;
                }
            }
            right = false; 
        } else if (!right) {

            for(int j = 0; j < m; j++) {
                if (j == 0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
            cout << endl;
            right = true;
        }
    }
    return 0;
}
