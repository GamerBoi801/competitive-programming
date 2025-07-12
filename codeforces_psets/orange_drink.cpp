// https://codeforces.com/problemset/problem/200/B
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    float total = 0.0f;


    for(int i = 0; i < n; i++) {
        int p = 0;
        cin >> p; 

        float temp = p / 100.0;
        total  = total + temp;
    }

    cout << (total /  n) * 100  << endl;

    return 0;
}