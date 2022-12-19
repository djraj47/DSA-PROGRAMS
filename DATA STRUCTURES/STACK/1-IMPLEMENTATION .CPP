// PROGRAM TO IMPLEMANT A STACK AND USES OF ALL BASIC OPERATIONS.
// using ARRAYS

    #include<iostream>
    using namespace std;
    
    #define max 100
    int stack_arr[max];
    int top = -1;

    void push(int data)
    {
        if(top >= max-1)
        {
            cout<<"stack overflow .";
            return ;

        }
        stack_arr[++top]=data;
        cout << data << "  pushed into stack."<<endl;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow.";
            return ;
        }
        cout<<stack_arr[top]<<" poped from stack";
        top--;
    }
    void display()
    {
        cout<<"\nStack is :  ";
        for (int i = top ; i >=0  ; i--)
        {
            cout<<stack_arr[i]<<"  ";
        }
        cout<<endl;
    }
    void peek()
    {

        cout<<"Top element is "<<stack_arr[top];
    }
    void size()
    {
        cout<<"The size of stack is "<<top+1;
    }
    int main ()
    {   
        push(10);
        push(20);
        push(30);
        push(40);
        display();
        pop();
        peek();

        display();
        size();
    
    return 0;
    }