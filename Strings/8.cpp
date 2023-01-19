class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        vector<pair<int,string>> vect;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            vect.push_back({heights[i],names[i]});
        }

        sort(vect.begin(),vect.end());

        vector<string> ans;
        for(int j=vect.size()-1;j>=0;j--)
        {
            ans.push_back(vect[j].second);

        }
        
        return ans;
    }
};