class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        unordered_map<char,int> counts;
        for(int i=0;i<s.length();i++)
        {
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for(auto itr : counts)
            if(itr.second)
                return false;
        
        return true;
    }
};