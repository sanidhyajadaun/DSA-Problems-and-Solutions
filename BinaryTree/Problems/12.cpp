/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> ans;
        int level;
        queue<struct TreeNode*> q;
        q.push(root);

        struct TreeNode *temp;

        while(!q.empty()){
            int len = q.size();
            int sum = 0;
            for(int i=0;i<len;i++){
                temp = q.front();
                q.pop();
                
                sum+=temp->val;

                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(sum);
        }

        int max = INT_MIN;
        for(int j=0;j<ans.size();j++){
            if(ans[j]>max){
                max = ans[j];
                level = j+1;
            }
        }
        return level;
    }
};