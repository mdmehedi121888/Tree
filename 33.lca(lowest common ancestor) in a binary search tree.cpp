TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        int val = root->val;
        if(val > p->val && val>q->val)
        return lowestCommonAncestor(root->left,p,q);
         if(val < p->val && val < q->val)
        return lowestCommonAncestor(root->right,p,q);
        
        return root;
    }