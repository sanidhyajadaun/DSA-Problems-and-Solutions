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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();

                if(temp->val >=low && temp->val <=high)
                {
                    ans.push_back(temp->val);
                }

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        int sum=0;
        for(int j=0;j<ans.size();j++){
            sum += ans[j];
        }
        return sum;
    }
};