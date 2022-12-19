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