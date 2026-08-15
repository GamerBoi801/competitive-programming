// https://codeforces.com/problemset/problem/1899/A
#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;cin >> n;

        // vanya's turn 
        if (n % 3 == 1 || n % 3 == 2) {
            // vanya can -1 at this turn since  1 -1 = 0
            // she can +1 the 2 + 1 = 3 to becoem divisible 
            cout << "First\n";
        } else if (n % 3 == 0) {
            cout << "Second\n";
        }
    }
    return 0;
}