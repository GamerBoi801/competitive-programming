
#include <math.h>
#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int cost =n - ( k * (pow(w, 2) + w) / 2);
    if (cost <= 0){
        cout << abs(cost) << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}
