class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) 
    {
        int time=0,x,y;

        for(int i=1;i<points.size();i++)
        {
            x =points[i][0]-points[i-1][0];
            y =points[i][1]-points[i-1][1];

            time = time + max(abs(x),abs(y));
        }
        return time;
    }
};