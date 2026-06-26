#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int c = 0;
    int max_capacity = 0; // Tracks the highest passenger peak
    
    for(int i = 0; i < n; i++) {
        int enter, exit;
        cin >> exit >> enter;
        c += (-exit + enter);
        
        // Keep the largest value seen so far
        max_capacity = max(max_capacity, c); 
    }
    
    cout << max_capacity << endl;
    return 0;
}
