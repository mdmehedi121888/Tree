void inorder(TreeNode* root,vector<int>&v){
    if(root==NULL)return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    vector<int>ans;
    inorder(root1,ans);
    inorder(root2,ans);
    sort(ans.begin(),ans.end());
    return ans;
}