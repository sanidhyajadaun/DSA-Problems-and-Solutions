class Solution {
public:

    int checkNumber(int num)
    {
        int val=0;
        while(num>0)
        {
            val++;
            num/=10;
        }
        return val;
    }

    int findNumbers(vector<int>& nums) 
    {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
           if(checkNumber(nums[i])%2==0)
           {
               ans++;
           }
        }
        return ans;
    }
};