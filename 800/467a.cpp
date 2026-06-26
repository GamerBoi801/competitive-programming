

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int c=0;
    for(int i = 0;i < n; i++) {
        int pop, quant;cin >> pop >> quant;
        if (quant - pop >= 2  ) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
