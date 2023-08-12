 int height(TreeNode* root,int &mx){
        if(root==NULL)
        return 0;
       int l =  max(0,height(root->left,mx));// max(0,negSum);
      int r =   max(0,height(root->right,mx));
        mx = max(mx,root->val+l+r);
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN; //for negative sum
        height(root,mx);
        return mx;
    }