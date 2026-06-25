#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m>> a;
    long long total;
    long long tiles_n = (n + a - 1)/ a;
    long long tiles_m = (m+a-1) / a;
    total = tiles_m * tiles_n;
    cout << total << endl;
    return 0;
}
