#include<iostream>
using namespace std;

class node
{
    public :
    int data ;
    node * next;
    node(int val)
    {
        data = val;
        next = NULL ;

    }
};
class queue
{
    public :
    node * front;
    node * rear ;
    queue()
    {
        front = NULL;
        rear = NULL ;

    }


void enqueue ( int val)
{
    node * n = new node ( val );
    if( front== NULL)
    {
        front = n;
        rear = n;
    }
    rear->next=n;
    rear=n;
}

void dequeue ( )
{
    node * temp = front ;
    if(front==NULL)
    {
        cout<<"queue underflow "<<endl;
    }
    front = front->next;
    delete(temp);
}
void display()
{
    node * temp = front;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    cout<<endl;
}
};

int main ()
{   
    queue q1;
    q1.enqueue(9);
    q1.enqueue(11);

    q1.enqueue(12);
    q1.enqueue(13);
    q1.enqueue(14);
    q1.enqueue(15);
    q1.display();
    q1.dequeue();
      q1.display();

return 0;
}