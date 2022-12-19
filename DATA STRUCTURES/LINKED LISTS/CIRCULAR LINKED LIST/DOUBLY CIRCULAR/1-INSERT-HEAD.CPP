#include<iostream>
using namespace std;

class node
{
    public :
    int data;
    node * next ;
    node * prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertBegin( node* &head, int value)
{

    struct node *temp = head->prev;
 
     struct node* n = new node(value);
    n->data = value;   
    n->next = head;
    n->prev = temp;
 

    temp->next = head->prev = n;
 

    head = n;
}

void display(node * head)
{
     node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp!= head);
    cout << endl;
}


int main ()
{
    node * head = NULL;
    insertBegin(head , 10);
    insertBegin(head,18);
    insertBegin(head,1223);
    display(head);
return 0;
}