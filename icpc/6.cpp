#include <vector>
#include <set>
#include <iostream>
using namespace std;

const int MODULO = 1000000007;

long long factorial(int  n) {
    long long t= 1;
    for(int i = 1 ; i <= n; i++) {
        t*= i;
    }
    return t;

}

int main() {
    int n=0; cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    long long total = 0;

    for(int i = 0 ;  i < n; i++) {
        cin >> a[i] >> b[i];
    }

    for(int combo = 0 ; combo < n; combo++) {
        // this goes forward
        for(int c1= combo+1; c1 < n; c1++) {
            
            int total_a = a[c1] + a[combo];
            int total_b = b[c1] + b[combo];
            int sum  = total_a + total_b;

            long long  temp_sum =  factorial(sum) / (factorial(total_a) + factorial(total_b));
            total += temp_sum; 
        }
        // now go backward
        for(int c2 = combo - 1; c2 >= 0; c2--) {
             int total_a = a[c2] + a[combo];
            int total_b = b[c2] + b[combo];
            int sum  = total_a + total_b;

            long long  temp_sum =  factorial(sum) / (factorial(total_a) + factorial(total_b));
            total += temp_sum; 
        }
        }

    cout << (total/ 2)  % MODULO << endl;
    return 0; 
    }

