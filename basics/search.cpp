#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};

bool search(node* head, int key) {
    node* current = head;

    while (current != NULL) {
        if (current->data == key) {
            return true;
        }
        current = current->next;
    }
    return false;
}

int main() {
    int key;
    cout << "Enter element to search: ";
    cin >> key;

    node* head = new node(15);
    head->next = new node(40);

    if (search(head, key)) {
        cout << "Found";
    }
    else {
        cout << "Not Found";
    }

    cout << "\nThe linked list is: ";
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}