

#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    int min_time = 0;

    for(int i = 0; i < t; i++) {
        int n; cin >> n; // num of stations
        int e1; cin >> e1;
        int e2; cin >> e2;

        int w1[n]; // processing times for l1

        for(int j = 0; j < n; j++) {
            cin >> w1[j];
        }

        int w2[n]; // processing times for l2

        for(int k = 0; k < n; k ++) {
            cin >> w2[k];
        }

        int s1[n-1]; // switch t from 1-2
         int s2[n-1]; // switch t from 2-1

        for(int l = 0 ; l < n-1; l++) cin >> s1[l];
        for(int m = 0; m < n ; m++) cin >> s2[m];

        int x1; cin >> x1;
        int x2; cin>>x2;

    }


    return 0;
}
