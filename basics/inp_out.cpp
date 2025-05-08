#include <iostream>
using namespace std;

int main() {  //cin used for input  cout used for output   
    // first approach
     /* int a, b;
    string x;
    cin >> a >> b >> x; //input
    cout << a << ' ' << ' ' <<  b  << ' ' << x << endl; //output
*/
    // second approach
    int a, b;
    string x;
    scanf("%d %d %s", &a, &b, &x[0]); //input
    printf("%d, %d, %s\n", a, b, x.c_str()); //output
    }