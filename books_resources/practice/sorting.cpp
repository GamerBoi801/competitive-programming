#include <bits/stdc++.h>
using namespace std;

vector<int> bubble_sort(vector<int> a) {
     
    // Time complexity is O(n^2)
    //  if 2 elements are not arranged they are swaped in this cause if prior > latter

    int n = a.size();
    for(int i = 0 ; i < n; i++) {
        for(int j = 0 ; j < n-1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    return a;
}

vector<int> merge_sort(vector<int> a) {
    // TIme complexity O (n log n) 
    int n = a.size();
    // Sorts an array by recursively divifing array into subarrays and then smerging them
    
    /* Algorithm: 
        Sorts a subarrau array[a .. b] as follows:
        
        1. If a = b , do not do anything , dont do anything as the subarray is alr sorted
        2. Calculate the poistion of the middle element k = (a+b) // 2 
        3. Recursively sorts the subarray a[a..k]
        4. Recursively sorts the subarray a[k+1 .. b]
        5. Merges the sortes subarrays array[a..k] and array[k+1 ...b] ino a sorted subarray
        of array [a..b]         
        */
        return a;
}

int main() {
    vector<int> a(4) = {4, 3, 2, 1};
    sort(a.begin(), a.end());

}