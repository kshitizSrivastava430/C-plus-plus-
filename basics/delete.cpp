#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

void insert(node*& head, int value)
{
    node* n = new node();
    n->data = value;
    n->next = NULL;

    if(head == NULL) {
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = n;
}

void display(node* head)
{
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void deleteNode(node*& head, int value)
{
    if(head == NULL)
        return;

    if(head->data == value)
    {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node* temp = head;

    while(temp->next != NULL)
    {
        if(temp->next->data == value)
        {
            node* t = temp->next;
            temp->next = temp->next->next;
            delete t;
            return;
        }
        temp = temp->next;
    }
}

int main()
{
    node* head = NULL;
    int n, x, del;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        insert(head, x);
    }

    cout << "List: ";
    display(head);

    cout << "Enter value to delete: ";
    cin >> del;

    deleteNode(head, del);

    cout << "Updated List: ";
    display(head);
}