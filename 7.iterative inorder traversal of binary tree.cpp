vector<int>iterativeInorder(TreeNode* root){
    stack<TreeNode*>s;
    vector<int>ans;
    while(1){
        if(root != NULL){
            s.push(root);
            root = root->left;
        }
        else{
            if(s.empty())break;
            root = s.top();
            s.pop();
            ans.push_back(root->val);
            root = root->right;
        }
    }
    return ans;
}