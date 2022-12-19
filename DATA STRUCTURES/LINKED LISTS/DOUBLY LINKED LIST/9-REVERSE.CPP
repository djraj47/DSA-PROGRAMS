// program to add node at head in a doubl lnked list....

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

    node*head = temp;
    while (temp!= NULL)
    {
        
        temp = temp->next;
    }
    while(head!=NULL)
    {
        cout << temp->data << "  ";
        temp=temp->prev;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
  

    int n, val;
    cout << "Enter number of nodes :";
    cin >> n;
    cout << "enter the nodes : ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        addtail(head, val);
    }
    cout << "The linked list is : ";
    display(head);

    return 0;
}