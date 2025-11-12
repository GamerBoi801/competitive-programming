// https://codeforces.com/problemset/problem/431/A
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s = "";
    // reads the full line
    getline(cin, s);

    istringstream iss(s);
    string a1, a2, a3, a4; // no.  calories burned for each strip
    iss >> a1 >> a2 >> a3 >> a4;

    string logs = "";
    cin >> logs;

    int total = 0;

    for(int i = 0; i < logs.length() ; i ++) {
        if (logs[i] == '1') {
            total += stoi(a1);
        } else if(logs[i] == '2') {
            total += stoi(a2);
        } else if(logs[i] == '3') {
            total += stoi(a3);
        } else if(logs[i] == '4') {
            total += stoi(a4);
        }
    }
    cout << total << endl;

    return 0;
}