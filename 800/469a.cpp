#include <set>
#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n; 

    set<int> combined_levels;
    int temp;

    // read Little X's levels
    int p; 
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> temp;
        combined_levels.insert(temp);
    }

    // read Little Y's levels
    int q; 
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> temp;
        combined_levels.insert(temp);
    }
    
    if (combined_levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
   
    return 0;

}