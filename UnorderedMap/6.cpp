class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashmap;
        for(auto str: strs)
        {
            string temp = str;
            sort(temp.begin(),temp.end());
            hashmap[temp].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto m: hashmap){
            ans.push_back(m.second);
        }
        return ans;
    }
};