// program to inset a node before a given node in doubly linked....

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void addtail(node *&head, int val)
{
    node *n = new node(val);

    node *temp = head;
    if (temp == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
     
    n->prev=temp;
    temp->next=n;
   
}

void insertbefore(node *&head, int key, int val)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    n->prev = temp->prev;
    temp->prev->next = n;
    n->next = temp;
    temp->prev = n;
}
void display(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    int n, val;
    cout << "Enter no of nodes :";
    cin >> n;
    cout << "Enter the nodes :";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        addtail(head, val);
    }
    display(head);
    int key;
    cout << "Enter the key and node to be added :";
    cin >> key >> val;

    insertbefore(head, key, val);
    display(head);

    return 0;
}