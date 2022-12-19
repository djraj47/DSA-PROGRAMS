// PROGRAM TO TRAVERSE BINARY TREE  IN PREORDER

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
void preoder(node * & root)
{   
    if(root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preoder(root->left);
    preoder(root->right);
}

int main()
{      
    node * root = new node(10);
    root->left =  new node(15);
    root->right = new node(20);
    preoder(root);
    return 0;
}