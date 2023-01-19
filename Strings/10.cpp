class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {   
        int count=0;
        for(auto i: words)
        {
            if(i.size()>=pref.size())
            {
                int j;
                for(j=0;j<pref.size();j++)
                {
                    if(i[j]!=pref[j])
                    {
                        break;
                    }
                }
                if(j==pref.size())
                {
                    count++;
                }
            }
        }
        return count;
    }
};