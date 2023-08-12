void preorder(TreeNode* root,vector<int>&v){
    if(root==NULL)
    {v.push_back(NULL);
    return;}
    v.push_back(root->val);
    preorder(root->left,v);
    preorder(root->right,v);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>v,v1;
        preorder(p,v);
        preorder(q,v1);
        int i=0,j=0;
        while(i<v.size() && j<v1.size()){
            if(v[i] != v1[j]) return false;
            ++i;
            ++j;
        }
        if(i!=v.size() || j!=v1.size())
        return false;
        return true;
    }