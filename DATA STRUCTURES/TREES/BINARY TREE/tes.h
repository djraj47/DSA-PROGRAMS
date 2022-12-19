node * mini(node * & root)
{
    if(root->left == NULL)
    {
        return root;
    }
    root = mini(root->left);
}
Tree* Delete(Tree* root, int x) {
    // If leaf is encountered
    if (root == NULL) {
        cout << “Node not found “;
        return NULL;
    }
    // Recur for left subtree
    if (root -> data > x) {
        root -> left = Delete(root -> left, x);
    }
    // Recur for right subtree
    else if (root -> data < x){
        root -> right = Delete(root -> right , x);
    }
    else {
        // Left child NULL
        if (root -> left == NULL) {
            Tree *temp = root -> right;
            free(root);
            return temp;
        }
        // Right child NULL
        else if (root -> right == NULL) {
            Tree *temp = root -> left;
            free(root);
            return temp;
        }
        else {
            // Finding the inorder successor
            Tree *temp = root -> right;
            // Finding the leftmost node in right subtree
            while (temp -> left != NULL) temp = temp -> left;
            // Changing value of root
            root -> data = temp -> data;
            // Deleting the leftmost node;
            root -> right = Delete(root -> right, temp -> data); 
        }
    }
    return root;
    
}