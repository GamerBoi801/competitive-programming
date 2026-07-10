#include <iostream> 
using namespace std; 

int main() { 
    int t; 
    cin >> t; 
    for(int i = 0 ; i < t; i++) { 
        int a, b, c; 
        cin >> a >> b >> c; 
        if (a + b == c || a + c == b || c + b == a) { 
            cout << "YES\n"; 
        } else { 
            cout << "NO\n"; 
        } 
    } 
    return 0; 
}

