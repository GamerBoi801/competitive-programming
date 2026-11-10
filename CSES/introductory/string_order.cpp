#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <type_traits>
#include <unordered_map>
using namespace std;
// https://cses.fi/problemset/task/1743

string lexicographically_smallest(map<char, int> c) {
    // returns the lexicographically smallest string based on the string dicitonary

    // calc total length of the final string
    int remaining_len = 0;
    for (auto const& [letter, count]: c) {
        remaining_len += count;
    }

    // check global impossibilty condition
    for(auto const & [letter, count]: c) {
        if (count > (remaining_len + 1) / 2){
            return "-1";
        }
    }

    /*
     Critical Limit = frac(remining_slots + 1, 2)

    */
    string result = "";
    char prev_char = '\0'; // for keeping track of the last placed character

    while (remaining_len > 0) {
        char choosen_char = '\0';

        // checking whether the char has hit the critical limit
        for(auto const& [letter, count]: c) {
            if (count > 0 && count == (remaining_len + 1) / 2) {
                choosen_char = letter;
                break;
            }
        }

        // if no letter was critcall dominant, grap the alphabettically valid smallest one
        if (choosen_char == '\0') {
            for (auto const& [letter, count]: c){
                if ( count > 0 && letter != prev_char) {
                    choosen_char = letter;
                    break;
                }
            }
        }

        //  if we cant find a vlaid char it';s imposible to add it into teh string so
        if(choosen_char == '\0' || choosen_char == prev_char) {
            return "-1";
        }

        result += choosen_char;
        c.at(choosen_char)--; 
        remaining_len--;
        prev_char = choosen_char;
    }
    return result;
}

int main() {
    string s;cin>>s;

    // for a string n, a character must appear <= (n+1)/2 to be valid for to be lexicographically reordered
    map<char, int> d;
    string  ans ="";
    for (char c: s) {
        d[c]++; // key: char, val: count
    }

    cout << lexicographically_smallest(d) << endl;

    return 0;
}
