#include <iostream> 
using namespace std; 

int main() { 
    int t; 
    cin >> t; 
    
    // Fixed: changed t++ to i++
    for(int i = 0 ; i < t; i++) { 
        int a, b, c; 
        cin >> a >> b >> c; 
        
        // Checks if one number is the sum of the other two
        if (a + b == c || a + c == b || c + b == a) { 
            cout << "YES\n"; 
        } else { 
            cout << "NO\n"; 
        } 
    } 
    return 0; 
}
