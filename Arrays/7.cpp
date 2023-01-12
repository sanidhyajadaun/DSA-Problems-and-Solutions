class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int wealth=-1;
        for(int i=0;i<accounts.size();i++)
        {
            int total=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                total = total + accounts[i][j];   
            }
            wealth=max(wealth,total);
        }
        return wealth;
    }
};