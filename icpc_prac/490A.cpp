// https://codeforces.com/problemset/problem/490/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;

    vector<int> one;
    vector<int> two;
    vector<int> three;

    for(int i = 1 ; i <= n; i++) {
        int t; cin >>t;
        if(t==1) one.push_back(i);
        if(t==2)two.push_back(i);
        if(t==3) three.push_back(i);
    }

    int num_teams = min({one.size(), two.size(), three.size()});
    cout << num_teams << endl;

    for(int i = 0 ; i < num_teams; i++) {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }

    return 0;   
}