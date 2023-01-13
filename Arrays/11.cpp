class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) 
    {
        vector<int> temp;
        for(int i=0;i<queries.size();i++)
        {
            int ans=0;
            int a=queries[i][0];
            int b=queries[i][1];
            int r=queries[i][2];
            for(int j=0;j<points.size();j++)
            {
                int x=points[j][0];
                int y=points[j][1];
                int x1=pow((x-a),2);
                int y1=pow((y-b),2);
                long long int val=x1+y1;
                if(val<=r*r)
                {
                    ans++;
                }
            }
            temp.push_back(ans);
        }
        return temp;
        
    }
};