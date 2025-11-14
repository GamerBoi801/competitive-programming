#include <iostream>
#include "my.h"
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // iterators var that points to element in DS
    // s.begin() -> to first element in array
    // s.end() -> last element in array   
    // need to include <iterators> to make use

    vector<int> v = {4, 1, 3, 2, 5};
    sort(v.begin(), v.end());  // Sort ascending

    if (binary_search(v.begin(), v.end(), 3)) {
        cout << "3 found" << endl;
    }
    return 0;

}