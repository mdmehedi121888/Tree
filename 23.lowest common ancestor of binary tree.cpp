bool getpath(TreeNode*root,vector<TreeNode*>&v,TreeNode*x){
    if(root==NULL)return false;
    v.push_back(root);
    if(root==x) return true;
    if(getpath(root->left,v,x) || getpath(root->right,v,x))
    return true;
    v.pop_back();
    return false;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>left,right;
        getpath(root,left,p);
        getpath(root,right,q);
        TreeNode* ans;
        int n = min(left.size(),right.size());
        for(int i=n-1;i>=0;--i){
            if(left[i]==right[i]){
                ans=left[i];
                break;
            }
        }
        return ans;
    }