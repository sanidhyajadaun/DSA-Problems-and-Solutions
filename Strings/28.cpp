class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string pref = strs[0];
        for(int i=1;i<strs.size();i++)
        {
            int k = 0;
            int j = 0;
            while(k<pref.size() || j<strs[i].size())
            {
                if(pref[k]==strs[i][j])
                {
                    k++;
                    j++;
                }
                else 
                {
                    pref = strs[i].substr(0,j);
                    break;
                }

            }

        }
        return pref;
    }
};