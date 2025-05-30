// Problem Link : https://codeforces.com/problemset/problem/141/A
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// trim from start (in place)
static inline void ltrim(string &s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), 
        [](unsigned char ch) { return !isspace(ch); }));
}

// trim from end (in place)
static inline void rtrim(string &s) {
    s.erase(find_if(s.rbegin(), s.rend(), 
        [](unsigned char ch) { return !isspace(ch); }).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(string &s) {
    ltrim(s);
    rtrim(s);
}

int main() {
    // frequency table approach
    string a, b, c;
     getline(cin, a); //guest name
     getline(cin, b); //host name
     getline(cin, c); //pile  of letters

     trim(a);
     trim(b);
     trim(c);

    a = a+b; // concatenating both strings
    int n = a.length();
   
    // first deciding case
    
    if ((n != c.length())) {
        cout << "NO" << endl;
        return 1;
    }
    int count_letters[26] = {0}; // keeps count of all the letters and is of length 26 (A-Z) for str a+b
    int count_pile_letters[26] = {0};  // for str c

    for (int i = 0; i < n; i++) { //iterating over the string
        char character1 = a[i];
        char character2 = c[i];

        int index1 = character1 - 'A';
        int index2 = character2 - 'A';

        count_letters[index1]++;
        count_pile_letters[index2]++;

    }

    // now iterating over the freq table
    // Compare frequencies
    for (int j = 0; j < 26; j++) {
        if (count_letters[j] != count_pile_letters[j]) {
            cout << "NO" << endl;
            return 1;
        }
    }
    cout << "YES" << endl;
    return 0;

}