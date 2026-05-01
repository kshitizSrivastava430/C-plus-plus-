#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

void insertatlast(node*& head, int value)
{
    node* newnode = new node();
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

int main()
{
    node* head = NULL;

    insertatlast(head, 66);
    insertatlast(head, 99);
    insertatlast(head, 106);
    insertatlast(head, 21);

    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}