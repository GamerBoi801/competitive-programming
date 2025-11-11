// https://codeforces.com/problemset/problem/339/A
#include <iostream>
using namespace std;

int main() {
    string user_input;
    cin >> user_input;
    int one_count = 0, two_count = 0, three_count = 0;

    for (char ch : user_input) {
        if (ch == '1') one_count++;
        else if (ch == '2') two_count++;
        else if (ch == '3') three_count++;
    }

    string answer = "";
    bool first = true;

    for (int i = 0; i < one_count; i++) {
        if (!first) answer += "+";
        answer += "1";
        first = false;
    }
    for (int i = 0; i < two_count; i++) {
        if (!first) answer += "+";
        answer += "2";
        first = false;
    }
    for (int i = 0; i < three_count; i++) {
        if (!first) answer += "+";
        answer += "3";
        first = false;
    }
    
    cout << answer << endl;
    return 0;
}
