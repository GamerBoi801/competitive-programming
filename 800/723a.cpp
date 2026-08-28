#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // int x1, x2, x3; cin >> x1 >> x2 >> x3;
    vector<int> L(3);
    for(int i = 0; i < 3; i++) {
        cin >> L[i];
    }
    int maxima = *max_element(L.begin(), L.end());
    int minima = *min_element(L.begin(), L.end());

    cout << maxima - minima << endl;
    return 0;
}
y