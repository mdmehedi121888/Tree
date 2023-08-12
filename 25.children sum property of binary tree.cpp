
bool isParentSum(Node *root){
    if(root==NULL)return true;
    int ans=0;
    if(root->left)ans+=root->left->data;
    if(root->right)ans+=root->right->data;
    if(ans != root->data && (root->left!=NULL || root->right!=NULL))
    return false;
     return (isParentSum(root->left) && isParentSum(root->right));
    
}