// program to add a node after a givrn node  of a circular single linked list.

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void addhead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void afternode(node *&head)
{
    int val, key;
    cout << "Enter the node value : " << endl;
    cin >> val;
    cout << "Enter the node where new node will be addded :" << endl;
    cin >> key;
    node *n = new node(val);
    node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    node *head = NULL;
    addhead(head, 10);
    addhead(head, 11);
    addhead(head, 12);
    addhead(head, 13);
    addhead(head, 14);
    addhead(head, 15);

    display(head);
    afternode(head);
    display(head);
    return 0;
}