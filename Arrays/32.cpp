class Solution {
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int elesum = 0;
        int digitsum = 0;

        for(int i=0;i<nums.size();i++)
        {
            elesum+=nums[i];
            while(nums[i])
            {
                digitsum += nums[i]%10;
                nums[i] /= 10;
            }
        }
        return abs(elesum-digitsum);
    }
};