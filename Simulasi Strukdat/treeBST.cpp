Node* searchBST(Node* root, int key) // tambahkan root dan key
{
    if (root == NULL || root->data == key)  //sama
        return root; //root
    
    if (root->data < key)  //data
        return searchBST(root->right, key); //kanan 
    
    return searchBST(root->left, key); //key
}
// lengakpin code BST