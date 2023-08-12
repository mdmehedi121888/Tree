int findCeil(BinaryTreeNode<int> *node, int x){
    int ans=-1;
    while(node){
        if(node->data==x){
            ans=node->data;
            return ans;
        }
       else if(x>node->data){
            node = node->right;
        }
        else{
            ans = node->data;
            node = node->left;
        }
    }
    return ans;
}   