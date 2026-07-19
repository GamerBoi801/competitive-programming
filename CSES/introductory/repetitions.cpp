#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        int max_streak = 1;
        int current_streak = 1;

        for (size_t i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                current_streak++;
            } else {
                current_streak = 1; // Reset streak for the new character
            }
            max_streak = max(max_streak, current_streak);
        }

        cout << max_streak << "\n";
    }
    return 0;
}
