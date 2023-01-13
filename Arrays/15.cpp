class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        vector<int>maxRow;
        vector<int>maxCol;
        int maxim=0;
        int ans=0;

        for(int i=0;i<grid.size();i++) 
        {
           for(int j=0;j<grid[0].size();j++) 
            {
               maxim=max(maxim,grid[i][j]); 
            }
            maxRow.push_back(maxim);
            maxim=0;
        }    

        for(int j=0;j<grid.size();j++) 
        {
            for(int i=0;i<grid[0].size();i++)
            {
                maxim=max(maxim,grid[i][j]);
            }
            maxCol.push_back(maxim);
            maxim=0;
        } 

        for(int i=0;i<grid.size();i++) 
        {
            for(int j=0;j<grid[0].size();j++) 
            {
               int x=min(maxRow[i],maxCol[j]);
               if(x==grid[i][j])continue;
               ans+=(x-grid[i][j]); 
            }
        }
        return ans;
    }
};