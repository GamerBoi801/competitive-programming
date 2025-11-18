#include <bits/stdc++.h>
using namespace std;

long long count_bob_win(const vector<long long> &v, long long &a, long long b){
    long long cnt = 0;
    for(long long x: v) {
        long long da = llabs(x-a);
        long long db = llabs(x-b);
        if(db < da) cnt++;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        long long n, a;
        cin >> n >> a;
    

    vector<long long> v(n);
    for(int i = 0; i < n ; i++) cin >> v[i];

    long long b1 = 0;
    long long b2 = 2000000000LL;

    long long c1 = count_bob_win(v, a, b1);
    long long c2 = count_bob_win(v, a, b2);
    
    if(c1 >= c2) cout << b1 << endl;
    else cout << b2 << endl;
    }
    return 0;
}