#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(3); // inserts element
    s.count(3); // returns how many times an element occurs in set
    s.erase(3); // all values in para will be erased

    //iteration
    set<int> s1 = {0, 2, 5, 87, 7};
    cout <<s1.size() << endl;
    for(auto x: s1) {
        cout << x << endl;
    }

    cout << s1.count(2); // returns 0 when not in set & 1 when in set

    
    return 0;
}