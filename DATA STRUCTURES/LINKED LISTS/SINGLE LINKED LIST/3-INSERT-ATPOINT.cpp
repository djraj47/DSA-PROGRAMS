//  program to add a node at a given point in linked list.

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
void addpoint(node *&head, int val, int pos)
{
    node *temp = new node(val);

    if (pos == 0)
    {
        temp->next = head;
        head = temp;
    }
    node *prev = head;
    for (int i = 0; i < pos - 1; i++)
    {
        prev = prev->next;
    }
    temp->next = prev->next;
    prev->next = temp;
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
    node *head = new node(10);
    addend(head, 12);
    addend(head, 13);
    addend(head, 14);
    addend(head, 15);
    addpoint(head, 16, 3);
    display(head);
    return 0;
}