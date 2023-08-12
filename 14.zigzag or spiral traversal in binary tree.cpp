void levelOrder(TreeNode* root,vector<vector<int>>&ans){
    if(root==NULL)return;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int>v;
        for(int i=0;i<n;++i){
            root = q.front();
            q.pop();
            v.push_back(root->val);
            if(root->left != NULL)q.push(root->left);
            if(root->right != NULL)q.push(root->right);
        }
        ans.push_back(v);
    }
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
         levelOrder(root,ans);
         for(int i=0;i<ans.size();++i){
             if(i%2){
                 reverse(ans[i].begin(),ans[i].end());
             }
         }
         return ans;
    }