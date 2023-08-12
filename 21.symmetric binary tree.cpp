bool isCheck(TreeNode*left,TreeNode*right){
    if(left==NULL || right==NULL)
    return left==right;
    if(left->val != right->val)
    return false;
   return isCheck(left->left,right->right) && isCheck(left->right,right->left);
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
       return  isCheck(root->left,root->right);
    }