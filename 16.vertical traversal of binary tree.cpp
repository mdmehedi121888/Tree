 vector<int> verticalOrder(Node *root)
    {
        map<int,map<int,vector<int>>>mp;
        queue<pair<Node*,pair<int,int>>>q;
        vector<int>ans;
        if(root==NULL)return ans;
        q.push({root,{0,0}});
        while(!q.empty()){
            pair<Node*,pair<int,int>>temp=q.front();
            q.pop();
            Node* frontnode = temp.first;
            int vartical = temp.second.first;
            int level = temp.second.second;
            mp[vartical][level].push_back(frontnode->data);
            if(frontnode->left)
            q.push({frontnode->left,{vartical-1,level+1}});
            if(frontnode->right)
            q.push({frontnode->right,{vartical+1,level+1}});
        }
        for(auto i:mp){
            for(auto j:i.second){
                for(auto k:j.second){
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }