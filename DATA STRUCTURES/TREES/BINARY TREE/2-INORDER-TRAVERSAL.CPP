// PROGRAM TO TRAVERSE BINARY TREE IN INORDER

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
void inorder(node * & root)
{   
    if(root == NULL)
    {
        return ;
    }
    inorder(root->left);
    
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{      
    node * root = new node(10);
    root->left =  new node(15);
    root->right = new node(20);
    inorder(root);
    return 0;
}