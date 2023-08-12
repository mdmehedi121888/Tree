vector<vector<int>>levelOrder(Node* root){
    vector<vector<int>>ans;
    if(root==NULL)return ans;
    queue<Node*>q;
    q.push(root);
   
    while(!q.empty()){
         int n = q.size();
    vector<int>v;
        for(int i=0;i<n;++i){
        root = q.front();
        q.pop();
        if(root->left != NULL)q.push(root->left);
        if(root->right != NULL)q.push(root->right);
        v.push_back(root->val);
        }
        ans.push_back(v);
    }
    return ans;
    
}