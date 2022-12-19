// program to add a node at the end of the linked list.
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

void addend(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *tem)
{
    while (tem != NULL)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }
}
int main()
{
    node *head = NULL;
    head = new node(1);
    addend(head, 4);
    addend(head, 77);
    addend(head, 9);
    addend(head, 26);
    addend(head, 6);
    addend(head, 62);
    display(head);

    return 0;
}