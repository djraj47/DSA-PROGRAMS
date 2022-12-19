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

void inserttail(node * & head , int val)
{
    node * n = new node(val);
    node * temp= head;
    if(head== NULL)
    {
        head = n;
        return ;
    }
    while(temp!=head)
    {
        temp=temp->next;
    }
    n->prev=temp->next;
    head->prev=n;
    head = n;
}
void display(node * head)
{
     node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}


int main ()
{
    node * head = NULL;
    inserttail(head , 10);
    inserttail(head,18);
    inserttail(head,1223);
    display(head);
return 0;
}