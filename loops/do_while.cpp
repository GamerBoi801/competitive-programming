#include  <iostream>
using namespace std;

int main() {
    string n = "";
    do {
        cout << "Please enter(y/yes) or (n/no)  ";
        cin >> n;
    } while (n != "y" && n != "yes");

    return 0;
}