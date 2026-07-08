#include <vector>
#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n; 
        cin >> n;
        vector<int> summands;

        int temp = n;
        int pow = 1;  

        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0) {
                int round = digit * pow;
                summands.push_back(round);
            }
            temp /= 10;
            pow *= 10;                
        }

        cout << summands.size() << endl;
        for (auto s : summands) {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}