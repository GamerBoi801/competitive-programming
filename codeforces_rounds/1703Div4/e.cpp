// https://codeforces.com/contest/1703/problem/E
#include <bits/stdc++.h>
#include <limits>
#include <vector>
using namespace std;

vector<vector<int>> convert290(const vector<vector<int>>& matrix, int n) {
    /*
    Original: 
     0 1 1 0
     0 0 0 1
     0 1 1 0
     0 1 0 0

     Transformed :
     0 0 0 0
     1 1 0 1
     0 1 0 1
     0 0 1 0

     take i row make it J col k

     so how can we do this hmm 

    */
    vector<vector<int>> transformed;

    for(int i = 0; i < n; i++) {
        for(int j = 0 ; j < n; j++) {
            transformed[i][j] = matrix[j][i];
        }
    }
    return transformed;
}

int min_changes(const vector<vector<int>> &original, const vector<vector<int>> &transformed, int n) {
    int c = 0;
    for(int i= 0 ; i< n;i ++) {
        for(int j= 0; j < n; j++) {
            if (original[i]][j] != transformed[i][j]) {
                c++;
            }
        }
    }
    return c;
}

int main() {
    int t;cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<int>> matrix(n);

        for(int i = 0 ; i < n; i++) {
            for(int j = 0 ; j  < n; j++) {
                cin >> matrix[i][j];
            }
        }

        vector<vector<int>> a_90 = convert290(matrix, n);
        vector<vector<int>> a_180 = convert290(a_90,  n);
        vector<vector<int>> a_270 = convert290(a_180,  n);

        
    }
    return 0;
}
