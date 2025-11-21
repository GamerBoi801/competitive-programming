#include <iostream>
#include <string>
#include <cmath>  
using namespace std;

int main() {
    string s; cin >> s;

    int current_position = 0; 
    int total_moves = 0;

    for (char c : s) {
        int target_position = c - 'a';

        int clockwise = abs(target_position - current_position);
        int counterclockwise = 26 - clockwise;

        int step = min(clockwise, counterclockwise);

        total_moves += step;
        current_position = target_position;
    }

    cout << total_moves << endl;
    return 0;
}
