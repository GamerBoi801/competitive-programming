#include <iostream>
# include <vector>
using namespace std;

int main() {
    // dynamic arrays
    

    //empty vector
    vector<int> v;

    //adding items
    v.push_back(3); // v[0]
    v.push_back(2); // v[1]
    v.push_back(5); // v[2]

    v.pop_back(); //removes the last element in the array


    int length = v.size();  //len of vector

    //iteration over vector
    for(auto x: v) {
        cout << x << "\n";
    }

    cout << "Last element in a vector " << v.back() << endl;

    // declaration
    vector<int> v1 = {2,4,2,5,1};

    vector<int> v2(10, 5); // size 10, ini value is 5


    string a = "hello";
    string b = a + a;
    cout << b << endl;
    
    b[5] = 's';
    cout << b << endl;
    
    string c = b.substr(3, 4); // substr(k, x) k is start index, 4 means 4 char afterwards
    cout << c << endl;

    
    return 0;
}