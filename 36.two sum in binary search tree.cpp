void inorder(TreeNode* root,unordered_set<int>&s){
    if(root==NULL)return;
    inorder(root->left,s);
    s.insert(root->val);
    inorder(root->right,s);
}
    bool findTarget(TreeNode* root, int k) {
       unordered_set<int>s;
        inorder(root,s);
        for(auto i:s){
            if(i!=(k-i)){
                if(s.find(k-i)!=s.end())
            return true;
            }
            
        }
        return false;
    }