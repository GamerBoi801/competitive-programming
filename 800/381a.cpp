#include <bits/stdc++.h>
#include <vector>
using namespace std;

int card_score_chosen(vector<int>& card) {
    int n = card.size();
    int left = card[0], end = card[n-1];
    int index = 0;
    if (left > end) {
        index = 0;
    } else {
        index = n-1;
    }
    int choosen_val = card[index];
    card.erase(card.begin() + index);
    return choosen_val;
}

int main() {
    int n;cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >>a[i];
    }
    /* all n nums diff
        serja first move | either left or right end of the song
        Diam next move
        max sum of numbers
        is winner
        print Serja's, 
    */
    int cards_left = n;
    int serja = 0, diam=  0;
    for(int i = 0 ; i< n && cards_left > 0;i++) {
        // int left, end = a[0], a[cards_left-1];
        // serja's move
        if (i % 2 == 0) {
            serja += card_score_chosen(a);
        } else {
            diam += card_score_chosen(a);
        }
    }
    cout << serja << endl; cout << diam << endl;
    return 0;
}
