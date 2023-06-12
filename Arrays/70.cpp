class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto ip = unique(nums.begin(),nums.end());
        set<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.insert(nums[i]);
        }
        return ans.size();
        
    }
};