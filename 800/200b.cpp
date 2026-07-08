#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    double total =0;
    for(int i = 0 ; i < n ; i ++) {
        int t; cin >> t;
        total += (t / 100.0);
    }
    cout << (total /n) * 100 << endl;
    return 0;
}