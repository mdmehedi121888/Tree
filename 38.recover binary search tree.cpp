void inorder(TreeNode*root,vector<int>&v){
        if(root==NULL)return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int i=0;
    void check(TreeNode* root,vector<int>&v){
        if(root==NULL) return;
        check(root->left,v);
        if(v[i]!= root->val){
            swap(v[i],root->val);
        }
        ++i;
        check(root->right,v);
    }
    void recoverTree(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        sort(v.begin(),v.end());
        check(root,v);
    }