  vector<int> topView(Node *root)
    {
        vector<int>ans;
        if(root==NULL)return ans;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            pair<Node*,int>temp=q.front();
            q.pop();
            Node* frontNode = temp.first;
            int vartical = temp.second;
            if(mp.find(vartical)==mp.end())
                 mp[vartical]=frontNode->data;
    
            if(frontNode->left)
            q.push({frontNode->left,vartical-1});
            if(frontNode->right)
            q.push({frontNode->right,vartical+1});
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        
        return ans;
    }