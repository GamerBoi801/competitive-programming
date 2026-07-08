#include <iostream>
#include <set>
using namespace std;


int main() {
    set <long long> a;;
    // int c = 0;
    for(int i = 0 ; i < 4; i++) {
        long long val; cin >> val;
        a.insert(val);
    }
    cout << 4  - a.size() << endl;
    return 0;
}
