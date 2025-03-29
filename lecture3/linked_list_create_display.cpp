#include <iostream>

using namespace std;

// Define a Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* start;

int main() {
    // Creating nodes statically
    Node n1, n2, n3;

    // Assign values
    n1.data = 10;
    n2.data = 20;
    n3.data = 30;

    // Linking nodes
    n1.next = &n2;
    n2.next = &n3;
    n3.next = nullptr;  // Last node points to NULL
    
    start = &n1;
    Node *temp = start;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
