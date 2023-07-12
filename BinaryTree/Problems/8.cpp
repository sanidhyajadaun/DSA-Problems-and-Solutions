vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    if(root==NULL)
        return ans;
    
    queue<struct Node*> q;
    q.push(root);
    
    struct Node *temp;
    while(!q.empty())
    {
        int len = q.size();
        for(int i=0;i<len;i++){
            temp = q.front();
            q.pop();
            ans.push_back(temp->data);
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            if(temp->left!=NULL){
                q.push(temp->left);
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}