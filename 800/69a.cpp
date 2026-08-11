#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum_x = 0, sum_y = 0, sum_z = 0;

    for (int i = 0; i < n; i++) {
        long long x, y, z;
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    cout << (sum_x == 0 && sum_y == 0 && sum_z == 0 ? "YES\n" : "NO\n");
    return 0;
}
