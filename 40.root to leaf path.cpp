vector<vector<int>>ans;
void preorder(TreeNode* root,vector<int>v){
    if(root==NULL)return;  
    v.push_back(root->val);
    if(root->left == NULL && root->right==NULL) 
    ans.push_back(v);
    preorder(root->left,v);
    preorder(root->right,v);
    v.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root) {
        vector<int>v;
        preorder(root,v);
        return ans;
    }