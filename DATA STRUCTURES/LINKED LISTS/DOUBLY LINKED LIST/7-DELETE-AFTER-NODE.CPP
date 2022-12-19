// program to delete a given node  of the doubly linked list

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
void deleteafter(node *&head, int key)
{
    node *temp = head;
    node *tempprev = head;
    temp = head;
    while (temp->data != key)
    {
        tempprev = temp;
        temp = temp->next;
    }
    temp->next->prev = temp->prev;
    tempprev->next = temp->next;

    delete (temp);
}

int main()
{
    node *head = NULL;
    int n, val, key;
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
    cout << "Ente the node to be deleted :";
    cin >> key;
    deleteafter(head, key);
    display(head);

    return 0;
}