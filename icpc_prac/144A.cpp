// https://codeforces.com/problemset/problem/144/A
#include <iostream>
#include <vector>
#include <climits>
using namespace std;



int main() {
    // 1st is max_val, last is min_val
    int n; cin >> n;
    vector<int> arr(n);
    int max_val = INT_MIN, min_val = INT_MAX;
    int max_idx = -1, min_idx = -1;


    
    for(int i = 0 ; i < n; i++) {
        cin >> arr[i];
        if ( arr[i]> max_val){
            max_val = arr[i];
            max_idx = i;
        } 
        if(arr[i] <= min_val) {
            min_val = arr[i]; 
            min_idx = i;
            }

        }
    


    int count  = max_idx + (n-1 - min_idx);
    if (max_idx > min_idx) count--;

    cout << count << endl;
    return 0;
}