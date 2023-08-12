 TreeNode* searchBST(TreeNode* root, int val) {
        while(root != NULL && root->val != val){
            root = (val>root->val ? root->right:root->left);
            
        }
        return root;
    }