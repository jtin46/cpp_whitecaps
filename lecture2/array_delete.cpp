#include <iostream>
using namespace std;  // use namespace std to make cin and cout simple

int main() {
    // Declare an array of 5 integers
    int n = 5;
    int marks[n];

    // Input values into the array
    cout << "Enter mks in 5 subjects:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    // Output the values of the array
    cout << "You entered the following numbers:" << endl;
    for(int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    int pos;
    cout<<"enter the position which you want to delete";
    cin>>pos;

    for(int i = pos; i < n-1; i++) {
        marks[i] = marks[i+1];
    }
    n--;
    cout<< "updated array";
    for(int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }

    return 0;
}
