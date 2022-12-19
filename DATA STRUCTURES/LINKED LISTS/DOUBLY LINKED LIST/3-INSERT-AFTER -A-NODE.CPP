// program to add NODE after a given node in a doubly lnked list....

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
void addpoint(node *&head,int key, int val)
{
   node * n = new node (val);
   node * temp= head;
   while(temp->data!=key)
   {
    temp=temp->next;
   }
  n->next =  temp->next;
  temp->next->prev= n;
  n->prev=temp;
  temp->next=n;
}
void addtail(node *&head, int val)
{
    node *n = new node(val);

    node * temp = head;
    if(temp==NULL)
    {
        head= n;
        return;
        
    }

    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    n->prev=temp->next;
    temp->next=n;

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
{   node *head = NULL;
     int n,val;
     cout<<"Enter no of nodes :";
     cin>>n;
     cout<<"Enter the nodes :";
     for(int i=0;i<n;i++)
     {
        cin>>val;
        addtail(head , val);
     }
    display(head);
    int key;
    cout<<"Enter the key and node to be added :";
    cin>>key>>val;
    
    addpoint(head,key,val);
    display(head);
        return 0;

}