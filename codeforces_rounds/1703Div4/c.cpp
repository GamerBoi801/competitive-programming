// https://codeforces.com/contest/1703/problem/C
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int  increment(int n) {
    n++;
    if (n>= 10) {
        return 0;
    }  else {
        return n;
    }
}

int decrement(int n) {
    n--;
    if (n < 0) {
        return 9;
    } else {
        return n;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; // nums of wheels
        vector<int> w(n); // digits on aj of wheels after move
       for (int i = 0; i < n; i++) cin >> w[i];

        for (int  wheel = 0; wheel < n; wheel++) {
            int ops; cin >> ops; // no. of operations on one wheel
            vector<char> b(ops); // array that stores moves

            // taking moves 
            for(int move = 0; move < ops; move++) cin >> b[move];

            for (int op = ops-1 ; op >= 0; op--) {
                if (b[op] == 'D') {
                    // increment
                    w[wheel] = increment(w[wheel]);
                } else  {
                    // decrement
                    w[wheel] = decrement(w[wheel]);
                }
            }

        }

        // output answers
        for(int i = 0; i < n; i++) {
            cout << w[i] << " ";
        }cout << endl;
    }
    return 0;
}