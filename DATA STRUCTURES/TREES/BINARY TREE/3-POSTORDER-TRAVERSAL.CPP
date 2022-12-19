// PROGRAM TO TRAVERSE BINARY TREE IN POSTORDER

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void POSTORDER(node * & root)
{   
    if(root == NULL)
    {
        return ;
    }
    POSTORDER(root->left);
    POSTORDER(root->right);
    cout<<root->data<<" ";
}

int main()
{      
    node * root = new node(10);
    root->left =  new node(15);
    root->right = new node(20);
    POSTORDER(root);
    return 0;
}