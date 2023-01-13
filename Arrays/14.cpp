class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) 
    {
        int freq;
        vector<int> ans;
        for(int i=0; i<nums.size();i=i+2)
        {
            freq = nums[i];
            for(int j=0;j<freq;j++)
            {
                ans.push_back(nums[i+1]);
            }
        }
        return ans;
    }
};