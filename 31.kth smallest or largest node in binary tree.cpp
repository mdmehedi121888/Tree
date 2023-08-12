void inorder(TreeNode<int>*root,vector<int>&v){
    if(root==NULL)return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
int kthSmallest(TreeNode<int> *root, int k)
{
    vector<int>v;
    inorder(root,v);
    return v[k-1];//smallest value
    // largest -> reverse and print
}