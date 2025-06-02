// Problem Link: https://codeforces.com/problemset/problem/136/A
#include <iostream>
using namespace std;

int main() {
    int n; // number of inputs
    cin >> n;
    
   int i = 0;
    // ok so the pi is the number of the friend who gave the i person a gift
    // so left declare i and p[i] where p[i] stores the person who gave the gift to i
   int sender[n];
   int receiver[n];
    for(int index = 0; index < n; index++) {
        cin >> sender[i]; // over here sender[i] sent gift to i
        // now we have to rev map 
        // receiver[i] got gift from i
        int temp_sender = sender[i];
        receiver[temp_sender - 1] = i + 1;
        i++;
   }

   for (int j = 0; j < n; j++) {
    cout << receiver[j] << " ";
   }
   cout << endl;

   //

}