#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;  cin >> n;
    vector<int> e(n); // essence stored at a pylon
    vector<int> d(n); // essence(cost) of moving from i to i+1 

    for(int i = 0 ; i < n; i++) cin >> e[i];

    for(int j = 0; j < n; j++) {
        cin >> d[j];
    }

    // greedy best first search
    for(int idx = 0; idx < n; idx++) {
        int left_fuel = 0;
        int right_fuel = 0;
        int left_cost = 0;
        int right_cost = 0;
        if(idx == 0) {
            // check left
            left_cost = d[idx+1];
            right_cost = d[n-1];
            left_fuel =  e[idx+1];
            right_fuel = e[n-1];
            
            if(left_fuel - left_cost < 0) {
                // then right is the optimal path

            } else if(right_fuel - right_cost < 0) {
                
            }

        }        
    }

    return 0;
}
