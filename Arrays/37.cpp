class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int check = 0;
        vector<int> pos;
        for(int i=0;i<((nums.size())-1);i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                check = nums[i]+nums[j];
                if(check==target)
                {
                    pos.push_back(i);
                    pos.push_back(j);
                    break;
                }
            }

        }
        return pos;
        
    }
};