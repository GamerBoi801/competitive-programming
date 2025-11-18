// https://codeforces.com/problemset/problem/136/E
#include <iostream>
using namespace std;


// card from the table and shift all other cards so as to close the gap left by the removed card
int main() {
    string n  = "";
    cin >> n;

    int count_ques = 0;
    for(int i = 0;  i< n.length(); i ++) {
        if(n[i] == '?') {
            count_ques++;
        }
    }

    int possible_nums[] = {0, 1};


    return 0;
}