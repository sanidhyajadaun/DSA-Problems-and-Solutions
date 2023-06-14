class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hashmap;
        for(auto c:magazine) hashmap[c]++;
        for(auto c:ransomNote) {
            if(hashmap[c]) hashmap[c]--;
            else return false;
        }
        return true;
    }
};