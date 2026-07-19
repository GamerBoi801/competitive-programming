#include <bits/stdc++.h>
using namespace std;

int best_sum_array(vector<int> a) {
    int best = 0, sum=0;
    for(int k = 0 ; k < a.size(); k++) {
        sum = max(a[k], sum+a[k]);
        best = max(best, sum);
    }
    return best;
}

int main() {
    
    return 0;
}