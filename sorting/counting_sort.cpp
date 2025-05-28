#include <iostream>
using namespace std;

void count_sort(int arr[], int len) {
    // 1st find the max, min value n
    int maxima = arr[0];
    int minima = arr[0];   

    for (int i = 0; i < len; i++) {
        if(arr[i] > maxima) {
            maxima = arr[i];
        }
        if (arr[i] < minima) {
            minima = arr[i];
        }
}    
    //now the range of inputs are from min-max 
    int range = maxima - minima + 1;

    int *count = new int[range](); //dynamically allocates and ini to 0
    
    //for each element in arr. count is incremented at the index arr[i] - minima
    for(int i = 0;i < len; i++) {
        count[arr[i] - minima]++;
    }

    // rebuild the sorted array
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[index++] = i + minima;
            count[i]--;
        }
    }
                    
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    count_sort(arr, len);

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}