class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int i,j,goodpair=0;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j] && i<j)
                {
                    goodpair++;
                }
            }
        }    
        return goodpair;
    }
};