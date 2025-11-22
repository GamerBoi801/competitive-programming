#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int t; cin >> t;


    for(int i = 0 ; i < t; i++) {;
        int k; cin >>k; //allocated trades
        int n; cin >> n; // num of days
        vector<int> arr(n);

        for(int len = 0; len < n; len++) {
            cin >> arr[len];
        }

        if (k == 0 || n <= 1) {
            cout << 0 << endl;
            continue;
        }

         
        priority_queue<int> pq;
        int buy =0;

        for(int day =1; day < n; day++) {
            if (arr[day] <= arr[day-1]) {
                buy = day;
            } else {
                int start = buy;
                while (day + 1 < n && arr[day+1] >= arr[day]) {
                    day++;
                }
                pq.push(arr[day] - arr[start]);
                buy = day+1;
            }

        }

        int max_profit = 0;
        int count = 0;
        while(!pq.empty() && count < k) {
            max_profit += pq.top();
            pq.pop();
            count++;
        }


        cout << (max_profit)  << endl;
        
    }
    return 0;
}
