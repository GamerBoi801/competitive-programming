// https://codeforces.com/problemset/problem/104/A
#include <iostream>
using namespace std;

int main() {
    int required_score = 0; //score we must have 
    cin >> required_score;
    
    int score_left = required_score - 10; // 10 is value of queen of spades
    int possible_ways = 0;

    // first check to see if required score is more than 
    if (score_left == 10) {
        // we can add king queen jack all of them from all decks and 1 10 card of all decs
        possible_ways = possible_ways + 16 - 1; // -1 due to queen of spades being there
    } else if (score_left < 10) 
    {
        // from every dec a card of score left value except for 1 can be taken
        possible_ways = possible_ways + 4;
    } else if (score_left ==  11) {
        // Ace can be used from all the 4 decks
        possible_ways = possible_ways + 4;
    }
     else if (score_left <= 0) {
        possible_ways = 0; // no-ways
    } else if (score_left == 1) {
        // aces can be used from all decs
        possible_ways = possible_ways + 4;
    }
        
    
    
    cout << possible_ways << endl;
    // need to determine how many ways to get 2nd card so that the sym ot pts = n
    // first card taken is the Queen of spades(10 pts)

    return 0;
}