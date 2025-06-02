// problem Link: https://codeforces.com/problemset/problem/119/A
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int a, b, n;
    // simon (a), antisimon (b)
    cin >> a;
    cin >> b;
    cin >> n;

    while (true) {
        // simon turn first
        int result = gcd(a, n);
        // losing case
        if(result > n) {
            //simon lost
            cout << 1 << endl;
            break;
        } 
            // win win scenario
            n -= result;

        // antisimon
        if (gcd(b, n) > n) {
            // lose
            cout << 0 << endl;
            break;
        }
        
        n -= gcd(b, n);
    }
    
    return 0;
}