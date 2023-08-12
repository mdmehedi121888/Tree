void inOrder(TreeNode* root,vector<int>&v){
    if(root==NULL)return;
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
}
pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
   vector<int>v;
   inOrder(root,v);
    int low=-1,upp=-1;
    int x = lower_bound(v.begin(),v.end(),key)-v.begin();
    if(v[x]!=key){
         x-=1;
        if(x>=0)low=v[x];
    if(x!=v.size()-1)
    upp = v[x+1];
    }
    else{
        if(x>0)low=v[x-1];
    if(x!=v.size()-1)
    upp = v[x+1];
    }
  
    return {low,upp};
}