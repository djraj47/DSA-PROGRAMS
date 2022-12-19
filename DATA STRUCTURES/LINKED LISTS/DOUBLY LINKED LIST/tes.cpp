void print( node * head)
{
    if(head== NULL)
    {
        return ;
    }
    cout<<head->data<<"  ";
    head = head->next;
    print(head);
}