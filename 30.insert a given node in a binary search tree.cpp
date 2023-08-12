 TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node = root;
        if(root==NULL)
        {
            root = new TreeNode(val);
            return root;
        }
        while(root){ 
         if(root->val > val){
             if(root->left == NULL){
                 root->left = new TreeNode(val);
                 return node;
             }
             
             else
             root = root->left;
         }
        
        else {
            if(root->right == NULL){
                root->right = new TreeNode(val);
                return node;
            }
             
             else
             root = root->right;
        }
        
        }
       
        return node;
    }