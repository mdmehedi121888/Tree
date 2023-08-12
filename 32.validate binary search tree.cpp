void inOrder(TreeNode* root,vector<int>&v){
    if(root==NULL)return;
    inOrder(root->left,v);
    v.push_back(root->val);
    inOrder(root->right,v);
}
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        inOrder(root,v);
        if(v.size()<=1)return true;
        else{
            for(int i=1;i<v.size();++i){
                if(v[i-1]>=v[i])
                return false;
            }
        }
        return true;
    }