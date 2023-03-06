class Solution {
public:
    int partitionString(string s) {
        map<char, int> hashmap;
        int i = 0, n = s.size();
        int ans = 1;
        while (i < n) {
            hashmap[s[i]]++;
            if (hashmap[s[i]] == 2) {
                ans += 1;
                i -= 1;
                hashmap.clear();
            }
            i += 1;
        }
        return ans;
    }
};