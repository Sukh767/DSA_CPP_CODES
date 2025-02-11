#include <iostream>
#include <cstdlib>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data, Node*next){
        this->data = data;
        this->next = next;
    }

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

int getLength(Node* head){
    int count = 0;
    Node* temp = head;

    while(temp->next != nullptr){
        count += 1;
        temp = temp->next;
    }
    return count;
}

// Function to create a new node
Node*createNode(Node* head, int value) {
    Node* temp = head;
    Node* newNode = new Node(value);

    if(head == nullptr){
        head = newNode;
        temp = newNode;
    } else {
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
   return head;
}

// Function to remove every second node
Node* removeEverySecondNode(Node* head) {

    if(head == nullptr) return head;
    int count = getLength(head);
    Node* temp = head; // Pointer to traverse the list

    for(int i=0; i<count; i++){
        if(i%2==0){
            temp = temp->next;
            head->next = temp->next;
            delete temp;
        }
    }
    return head;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int size;
    cout << "Enter the size of the linked list: ";
    cin >> size;
    Node* head = nullptr;

    for (int i = 1; i <= size; i++) {
        cout << "Enter element " << i << " of the node: ";
        int element;
        cin >> element;
        head = createNode(head, element);
    }

    cout << "Original List: ";
    printList(head);

    //Call the removeEverySecondNode function
   head = removeEverySecondNode(head);

    cout << "Modified List after removing every second node: ";
    printList(head);

    return 0;
}