// program to delete node at the doubly linked list....

#include<iostream>
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
void addhead(node *&head, int val)
{
    node *n = new node(val);
    if (head != NULL)
    {
    n->next = head;
        head->prev = n;
    }
    head = n;
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
void deletehead ( node * & head )
{
    node * temp = head;
    temp = head ;
    head =  head -> next ;
    delete ( temp );
}



int main ()
{
    node *head = NULL;
    int n, val;
    cout << "Enter number of nodes :";
    cin >> n;
    cout << "enter the nodes : ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        addhead(head, val);
    }
    cout << "The linked list is : ";
    display(head);

    deletehead(head);
    display(head);

return 0;
}