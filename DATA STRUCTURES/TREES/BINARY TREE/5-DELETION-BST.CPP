// program to insert a node in a BINARY search tree.

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void insert(node *&root, int val)
{
    node *n = new node(val);
    if (root == NULL)
    {
        root = n;
        return;
    }
    if (root->data > n->data)
    {
        insert(root->left, val);
        return;
    }
    else if (root->data < n->data)
    {
        insert(root->right, val);
        return;
    }
}
void inorder(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    node *root = new node(15);

    insert(root, 55);
    insert(root, 72);
    insert(root, 95);
    insert(root, 75);
    insert(root, 12);
    inorder(root);
    cout << endl;
    return 0;
}