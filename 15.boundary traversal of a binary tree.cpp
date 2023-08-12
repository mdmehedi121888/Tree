bool isLeaves(TreeNode<int>* root){
    if(root->left==NULL && root->right==NULL)
    return true;
    return false;
}
void addleft(TreeNode<int>*root,vector<int>&res){
    root = root->left;
    while(root != NULL){
        if(isLeaves(root)==false)
         res.push_back(root->data);
         if(root->left != NULL)
         root = root->left;
         else
         root = root->right;
        
    }
}
void addleaves(TreeNode<int>*root,vector<int>&res){
    if(root==NULL)return;
    if(root->left == NULL && root->right==NULL)
    res.push_back(root->data);
    addleaves(root->left,res);// preorder technique
    addleaves(root->right,res);
}
void addright(TreeNode<int>*root,vector<int>&res){
    vector<int>v;
    root = root->right;
    while(root!=NULL){
        if(isLeaves(root)==false)
        {
            v.push_back(root->data);
            
        }
        if(root->right != NULL)root = root->right;
        else root= root->left;
    }
    reverse(v.begin(),v.end());
    for(auto i:v)res.push_back(i);
}
vector<int> traverseBoundary(TreeNode<int>* root){
    vector<int>res;
    if(root==NULL)return res;
    if(isLeaves(root)==false)res.push_back(root->data);
    addleft(root,res);
    addleaves(root,res);
    addright(root,res);
    return res;
}