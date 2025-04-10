#include <iostream>
using namespace std;

int main() {
    //str concatenation
    string first_name = "John";
    string last_name = "Doe";
    string full_name = first_name.append(last_name);
    cout << "Full name: " << full_name << endl;

    //number concatenation
    string x = "10";
    string y = "20";
    string z = x + y;
    cout << "Concatenated number: " << z << endl;

    
}