#include <iostream>
using namespace std;

void merge_sort(int arr[], int n);
void merge(int arr[], int leftHalf[], int RightHalf[], int mid, int other_mid);

int main() {
    int arr[] = {21, 403, 60, 12, 998, 1112, 50, 900}; 
    int n = sizeof(arr) / sizeof(arr[0]); // this gives the total size in bytes
    
    merge_sort(arr, n);

    for (int i = 0; i< n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return  0;  
}

void merge(int arr[], int leftHalf[], int RightHalf[], int mid, int other_mid) {
    int i = 0;
    int j = 0;
    int k = 0;
     // i for iterating through the left array
    // j for iterating through the right array
    // k for position in the original array

    //merge while both halves have elements
    while (i < mid && j < other_mid) 
    {
        if (leftHalf[i] <= RightHalf[j]) {
            arr[k] = leftHalf[i];
            i++;

        } else {
            arr[k] = RightHalf[j];
            j++;
        }
        k++;
    }
    
    // copy remaining elements from LeftHalf
    while (i < mid) {
        arr[k] = leftHalf[i];
        i++, k++;
    }

    //cp[y the other remaining elements from RightHalf
    while (j < other_mid) {
        arr[k] = RightHalf[j];
        j++, k++;
    }
    
}   

void merge_sort(int arr[], int n) {
    //handling base case by stopping when the array has one or zero elements
    if (n <= 1) {
        // No need to sort
        return;
    }
    // finding the middle index
    int mid = n / 2;

    // left half (start-mid)    right half(mid - right)
    int left_half[mid], right_half[n - mid];


    for (int i = 0; i < mid; i++) {
        left_half[i] = arr[i];
    }
    for (int i = mid; i < n; i++) {
        right_half[i - mid] = arr[i];
    }
    
    // recursively calls tp sort left and right 
    merge_sort(left_half, mid);
    merge_sort(right_half, n - mid);

    //merge sorted halves back into arr
    merge(arr, left_half, right_half, mid, n - mid);
}