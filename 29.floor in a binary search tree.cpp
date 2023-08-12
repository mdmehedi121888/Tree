int Floor(BinaryTreeNode<int> *node, int input)
{
	int ans=-1;
	while(node){
		if(node->data==input){
			ans=node->data;
			return ans;
		}
		else if(node->data > input){
			node = node->left;
		}
		else{
			ans = node->data;
			node = node->right;
		}
	}
	return ans;
}
