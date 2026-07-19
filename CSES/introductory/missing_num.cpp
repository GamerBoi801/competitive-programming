#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n; 
    cin >> n;
    
    long long sum = (pow(n, 2) + n) / 2;
    for(int i = 0 ; i < n-1; i++) {
        long long k; 
        cin >> k;
        sum -= k;
    }
    
    cout << sum << endl;
    return 0;
}
