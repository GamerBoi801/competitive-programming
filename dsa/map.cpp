#include <iostream>
#include <map>
using namespace std;

int main() {
    // key val pairs
    map<string, int> m; // access var is O(log n
    
    m["lol"] = 4;
    m["apple"] = 3;
    cout << m["lol"] << endl; // if val for that key is not there then it returns 0
    
    // mp.at(key) access value at that key
    // mp.insert({k, v}) // inserts key(k) and value(v)
    // m.erase(key) removes element key
    // m.size is num of elements
    // m.clear() removes all types of elements
    // m.empty() checks if empty
            
    return 0;
}