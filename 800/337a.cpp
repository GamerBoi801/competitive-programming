#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n>>m;
    vector<int> f(m);

    for(int i = 0 ; i < m; i++) {
        cin >> f[i];
    }

    // sorting
    sort(f.begin(), f.end());

    int min_diff = 1e9;

    // slies of window of size n acordd the sorted puzzle
    for(int i = 0 ; i<= m-n; ++i) {
        int current_diff = f[i + n - 1] - f[i];
        min_diff = min(min_diff, current_diff);
    }

    cout << min_diff << endl;
    return 0;
}
