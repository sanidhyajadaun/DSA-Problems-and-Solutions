class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) 
    {
        vector<int> lsquares;
        int n=rectangles.size();

        for(int i=0;i<n;i++)
        {
            int x = rectangles[i][0];
            int y = rectangles[i][1];
            lsquares.push_back(min(x,y));
        }

        int maxlen;
        maxlen = *max_element(lsquares.begin(),lsquares.end());
        int num = count(lsquares.begin(),lsquares.end(),maxlen);

        return num;
    }
};