class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> sums(k, 0);
        sums[0]++;
        int count = 0;
        int currentsum = 0;
        for(int i = 0; i<n; i++) 
        {
            currentsum = (currentsum + nums[i]%k + k)%k;
            count += sums[currentsum];
            sums[currentsum]++;
        }
        return count;
    }
};