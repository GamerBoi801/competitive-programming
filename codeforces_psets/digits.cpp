// https://codeforces.com/problemset/problem/734/B
#include <iostream>
using namespace std;

int main() {
    int k2 = 0;
    int k3 = 0;
    int k5 = 0;
    int k6 = 0;

    cin >> k2;
    cin >> k3;
    cin >> k5;
    cin >> k6;

    int total = 0;

    // first try to make 256 then 32
    while (true) {
        //256 first 
        if (k2 >= 1 && k5 >= 1 && k6 >= 1) {
            total = total + 256;
            k2 = k2 - 1;
            k5 = k5 - 1;
            k6 = k6 - 1;
        }
        else if (k3 >= 1 and k2 >= 1)
        {
            total = total + 32;
            k3 = k3 -1;
            k2 = k2 - 1;
        } else {
            break;
        }
        
    }
    cout << total << endl;

    return 0;
} 