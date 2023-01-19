class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
        int n=s.length();
        vector<int>ans(n+1);
        int start=0;
        int end=n;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                ans[i]=start;
                start++;
            }
            else
            {
                ans[i]=end;
                end--;
            }
        }
        ans[n]=end;
        return ans;
    }
};