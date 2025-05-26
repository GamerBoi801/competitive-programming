#include <iostream>

using namespace std;

int main() {

}

//function to calculate factorial
int factorial(int n) {
    long long x = 1;
    for ( int i = 2; i <= n; i++) {
        x = (x*i) % m; // take modulo after each multiplication
    }