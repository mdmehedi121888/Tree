 TreeNode* solve(vector<int>&v,int &i,int bound){
        if(i==v.size() || v[i]>bound)
        return NULL;
        TreeNode* root = new TreeNode(v[i++]);
        root->left = solve(v,i,root->val);
        root->right = solve(v,i,bound);
        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& v) {
        int i=0;
        TreeNode* root = solve(v,i,INT_MAX);
        return root;
    }