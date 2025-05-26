using namespace std;
#include <iostream>

int main() {
    #define REP(i, s, e) for (int i = s; i < e; i++)
    REP(i, 0, 5) {
        printf("%i \n", i); // This will not print anything because of the semicolon after the for loop
    }
    cout << endl;
    return 0;
}