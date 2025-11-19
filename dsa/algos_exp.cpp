#include <iostream>
#include <set>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    set<int> A = {5, 2, 8, 9 , 4};
    set<int> B = {3, 2, 9, 5};

    //algo 1 O(n Log n)


    for(int b: B) {
        if (A.find(B) != A.end()) {
            cout << b << "is in set A \n";
        }    }

    
    // algo2 O(n) hash set
    unordered_set<int> setA(A.begin(), A.end());
    
    for(int b: B) [
        if (setA.find(b) != setA.end()) {
            cout << "FOUND" << B << endl;;
        }
    ]

    return 0;
}