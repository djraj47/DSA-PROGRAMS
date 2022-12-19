// program to add a node at the head of the linked list.
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

void addfront(node *&head, int val)
{
    node *temp = new node(val);
    temp->next = head;
    head = temp;
}
void addend(node *& head , int val)
{
    node * n = new node(val);
    node * temp=head;
    while(temp->next!=NULL)
    {
        head=temp->next;
    }
    temp->next=n;
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
    node *second = NULL;
    second = new node(13);
    head->next = second;
    addfront(head, 22);
    display(head);
    addend(second,4);

    return 0;
}