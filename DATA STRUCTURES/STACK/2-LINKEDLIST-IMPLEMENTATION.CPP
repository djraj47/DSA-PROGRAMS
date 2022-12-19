#include<iostream>
using namespace std;

class stacknode
{
    public :
    int data ;
    stacknode * next ;
    stacknode(int val)
    {
        data = val ;
        next = NULL ;
    }
};

void push (stacknode *& top , int val)
{
    stacknode * n = new stacknode(val);
    if(top==NULL)
    {
        top=n;
        cout<<val<<" pushed in Stack"<<endl;
        return ;
    }
    n->next=top;
    top=n;
    cout<<val<<" pushed in Stack"<<endl;
}
void pop(stacknode *&top)
{
    if(top==NULL)
    {
        cout<<"Stack underflow ."<<endl;
        return ;
    }
    stacknode * temp= top;
    top=temp->next;
    cout<<temp->data<<" popped from Stack."<<endl;
    delete(temp);

}
void display(stacknode * top)
{
    cout<<"Stack is : ";
    while(top!=NULL)
    {
        cout<<top->data<<" ";
        top=top->next;
    }
    cout<<endl;
}
void peek(stacknode * &top)
{
    cout<<top->data<<" is top element ."<<endl;
}
int main ()
{
    stacknode * top = NULL ;
    push(top , 10);
    push(top , 12);
    display(top);
    pop(top);
    display(top);
    peek(top);

return 0;
}