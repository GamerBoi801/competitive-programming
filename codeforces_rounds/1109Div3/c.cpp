#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent, rnk;

    DSU(int n = 0) { init(n); }

    void init(int n) {
        parent.resize(n + 1);
        rnk.assign(n + 1, 0);
        for (int i = 1; i <= n; i++) parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return;
        if (rnk[a] < rnk[b]) swap(a, b);
        parent[b] = a;
        if (rnk[a] == rnk[b]) rnk[a]++;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> p(n + 1), pos(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i; // value & its current index
        }


        DSU dsu(n);
        for (int i = 1; i + x <= n; i++) dsu.unite(i, i + x);
        for (int i = 1; i + y <= n; i++) dsu.unite(i, i + y);

        bool ok = true;
        for (int v = 1; v <= n; v++) {
            int current_index = pos[v];
            if (dsu.find(current_index) != dsu.find(v)) {
                ok = false;
                break;
            }
        }

       if (ok == true){
        cout << "YES" << endl;

       } else {
        cout << "NO" << endl;
       }
    }
    return 0;
}
