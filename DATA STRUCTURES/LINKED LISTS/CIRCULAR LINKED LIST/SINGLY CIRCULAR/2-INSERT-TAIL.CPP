// program to add a node at the TAIL of a circular single linked list.

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

void addtail(node *&head, int val)
{
    node *n = new node(val);
    node * temp = head;
    if (head == NULL)
    {
        n->next=n;
        head = n;
        return;
    }
    
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next=n;
    n->next=head;
    
}
void display(node * head)
{
    node * temp = head;
    
 do
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }  while(temp!=head);
    cout<<endl;
}

int main()
{
    node *head = NULL;
    addtail(head,10);
    addtail(head, 11);
    addtail(head, 12);
    addtail(head, 13);
    addtail(head, 14);
    addtail(head, 15);
    display(head);

    return 0;
}