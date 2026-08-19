#include <bits/stdc++.h>
#include <functional>
#include <string>
#include <unordered_map>
using namespace std;


struct reg_system {
    // maps each username to the next number suffix to use
    unordered_map<string, int> db;

    // Registers a name, and returns the system response
    string register_user(const string& name) {
        // if name does not exist in this username then (count is 0)
        if (db[name] == 0) {
            db[name] =1; // mark that we have seen it once
            return "OK";
        } 
        else {
            // get current suffix number for this name
            int suffix = db[name];

            // crate new prompt name
            string new_name = name + to_string(suffix); // adds name1 if c is 2

            db[name]++; // increments count for base name and to ready for next duplication

            // also register new name into db as it is
            db[new_name] = 1;

            return new_name;
        }
    }
 };
int main() {
    int n; cin >> n;
    reg_system sys;
    string name;

    for(int i=0;i < n; i++) {
        cin >> name;
        cout << sys.register_user(name) << endl;
    }
    return 0;
}
