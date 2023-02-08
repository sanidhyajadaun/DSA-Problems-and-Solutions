class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int maxi = -1;
        int mini = 1000;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                maxi = nums[i];
            }
            if(nums[i]<mini)
            {
                mini = nums[i];
            }
        }

        int result = min(maxi,mini); 
        while (result > 0) {
            if (maxi % result == 0 && mini % result == 0) {
                break;
            }
            result--;
        }
        return result; // return gcd of the maxi and mini   
    }
};