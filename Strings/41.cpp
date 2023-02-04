class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<string> ans;
        for(int i=0;i<words.size();i++)
        {
            int flag=1;
            string s=words[i];
            if(s.length()!=pattern.length())
            continue;
            unordered_map<char,char> m;
            unordered_map<char,char> m2;
            for(int j=0;j<s.length();j++)
            {
                if((m.find(pattern[j])==m.end())  && (m2.find(s[j])==m2.end()))
                {
                    m[pattern[j]]=s[j];
                    m2[s[j]]=pattern[j];
                }
               else
                {
                    if(m[pattern[j]]!=s[j] || m2[s[j]]!=pattern[j] )
                    {
                    flag=0;
                    break;
                    }
                }
            }
            if(flag==1)
            ans.push_back(s);
        }
        return ans;
    }
};