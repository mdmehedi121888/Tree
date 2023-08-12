bool getpath(TreeNode*A,vector<int>&ans,int x){
     if(A==NULL)return false;
      ans.push_back(A->val);
     if(A->val == x) return true;
     if(getpath(A->left,ans,x) || getpath(A->right,ans,x))
     return true;
     ans.pop_back();
     return false;
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    if(A==NULL)return ans;
    getpath(A,ans,B);
    return ans;
}
