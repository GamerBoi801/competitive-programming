// https://codeforces.com/problemset/problem/734/A
#include <iostream>
using namespace std;

int main() {
     int n = 0;
    cin >> n;

    int anton = 0, danik = 0;
        string name = "";
        cin >> name;
        
        for(int j = 0; j < name.length(); j++) {
            if(name[j] == 'A') {
                anton++;
            } else if (name[j] == 'D') {
                danik++;
            }
        }


                if (anton > danik) {
            cout << "Anton" << endl;
        } else if (anton < danik) {cout << "Danik"  << endl;}
        else {
            cout << "Friendship" << endl;
        }
    return 0;
}