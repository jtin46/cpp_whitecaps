#include <iostream>
using namespace std;

void bruteForceSort(int arr[], int n);
void printArray( int arr[], int n);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);
    
    bruteForceSort(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}

// DRY : do not repeat yourself

void printArray( int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

void bruteForceSort(int arr[], int n) {
    // Brute force sorting using nested loops
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                // Swap if the element at i is greater than the element at j
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
