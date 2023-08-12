void preorder(Node* root,int &ans){
	 if(root==NULL)return;
	 ans=root->data;
	 preorder(root->left,ans); // root->right if find the maximum
 }
int minVal(Node* root){
	int ans=-1;
	preorder(root,ans);	
	return ans;
}