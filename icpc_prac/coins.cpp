// https://codeforces.com/problemset/problem/58/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> denom;
    denom.push_back(n); // largest coin

    int current = n;
    for (int i = n - 1; i >= 1; i--) {
        if (current % i == 0) {
            denom.push_back(i);
            current = i;
        }
    }

    for (int i = 0; i < (int)denom.size(); i++) {
        cout << denom[i] << " ";
    }
    cout << endl;

    return 0;
}
