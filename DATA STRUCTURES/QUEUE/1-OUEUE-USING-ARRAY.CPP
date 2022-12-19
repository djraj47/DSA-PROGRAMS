#include <iostream>
using namespace std;
#define max 10
int arr[max];
int rear = -1;
int front = -1;
void enqueue(int val)
{
    if (rear == max - 1)
    {
        cout << "Queue is full ." << endl;
    }
    rear++;
    arr[rear] = val;
    if (front == -1)
    {
        front++;
    }
}
void dequeue()
{

    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty." << endl;
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}
void display()
{
    cout << "-----------QUEUE----------" << endl;
    cout << "---> ";
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "<---";
}
int main()
{
    enqueue(10);
    enqueue(40);
    enqueue(30);
    dequeue();
    enqueue(2);
    display();

    return 0;
}