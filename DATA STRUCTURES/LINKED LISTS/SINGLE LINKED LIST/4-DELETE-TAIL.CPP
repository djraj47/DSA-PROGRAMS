// PROGRAM TO DELETE THE LAST NODE FROM THE LINKED LIST.
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void deleteend(node * &head)
{
   node * prev,*end;
   prev=end=head;
   while(prev->next!=NULL)
   {
    end=prev;
    prev=prev->next;
   }
   end->next=NULL;
   delete(prev);
}
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
    cout<<endl;
}

int main ()
{
     node *head = NULL;
    head = new node(1);
    addend(head, 4);
    addend(head, 77);
    addend(head, 9);
    addend(head, 26);
    display(head);
    deleteend(head);
    display(head);


return 0;
}