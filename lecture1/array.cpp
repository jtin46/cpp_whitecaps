#include <iostream>
using namespace std;

int main() {
    // Declare an array of 5 integers
    int numbers[5];

    // Input values into the array
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Output the values of the array
    cout << "You entered the following numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
