class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int good_pair=0;

        for(auto i: mp){
            int n = i.second;
            good_pair += (n*(n-1))/2;
        }

        return good_pair;
    }
};
