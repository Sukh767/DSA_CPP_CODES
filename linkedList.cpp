#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* start = NULL; // Head of the linked list
Node* end = NULL;   // Tail of the linked list

// Function to create a new node
void create() {
    Node* p = new Node();
    cin >> p->data;
    p->next = NULL;

    if (start == NULL) { // First node in the list
        start = p;
        end = p;
    } else { // Append to the end of the list
        end->next = p;
        end = p;
    }
}

// Function to remove every second node
void removeEverySecondNode() {
    if (start == NULL || start->next == NULL) {
        // List is empty or has only one node
        return;
    }

    Node* temp = start; // Pointer to traverse the list

    while (temp != NULL && temp->next != NULL) {
        Node* del = temp->next;        // Node to delete
        temp->next = temp->next->next; // Skip the next node
        delete del;                    // Free memory
        temp = temp->next;             // Move to the next valid node
    }
}

// Function to print the linked list
void printList() {
    Node* temp = start;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int size;
    cout << "Enter the size of the linked list: ";
    cin >> size;

    for (int i = 1; i <= size; i++) {
        cout << "Enter element " << i << " of the node: ";
        create();
    }

    cout << "Original List: ";
    printList();

    // Call the removeEverySecondNode function
    removeEverySecondNode();

    cout << "Modified List after removing every second node: ";
    printList();

    return 0;
}