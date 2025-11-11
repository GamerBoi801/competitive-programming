// https://codeforces.com/problemset/problem/266/A
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0; // number of stones
    cin >> n;
    
    string pattern = "";
    cin >> pattern;
    int removals = 0;

    for(int i = 0; i < pattern.length() - 1; i++) {
        // ned 2 check whether the char is the same 
        // from that we can check if we found an unequal char then cut the excess between
        char current = pattern[i];
        if(current == pattern[i+1]) {
            int j = i;
            while (j < pattern.length() && current == pattern[j])
            {
                j++;
                
            }
            removals += (j-i - 1);
            i = j-1;    
        }

    }
    cout << removals << endl;
    return 0;
}