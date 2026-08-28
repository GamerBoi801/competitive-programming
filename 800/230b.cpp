#include <bits/stdc++.h>
using namespace std;

// bool t_prime(long long x) {
//     //  if 3 distinct + divisors
//     int c= 0;
//     for(long long i = 1; i <=x; i++) {
//         if (x % i == 0) {
//             c++;
//         } 
//     }
//     if (c==3) return true;
//     else return false;
// }

bool  prime(long long n) {
    // determins whetehr the num is n
    if (n <= 1) {
        return false;
    } else if(n <= 3) {
        return true;
    } 

    if (n % 2 ==0 || n % 3 == 0) {
        return false;
    }

    long long i = 5;
    while (i * i <= n) {
        if (n % i ==0 || n % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true; 
}

bool exact_3_roots(long long n) {
    // check if n is a perfect square
    long long root = round(sqrt(n)); 
    if (root * root != n) {          
        return false;
    } 

    // checking if the root is prime or not
    return prime(root);
}

int main() {
    int n; cin >> n;
    // vector<int> a(n);

    while(n--) {
        long long x; cin >> x;
        if (exact_3_roots(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
         }
    }
    return 0;
}
