class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) 
    {
        set<int> distinct; 
        int new_num=0, temp=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            distinct.insert(nums[i]);
            temp = nums[i];
            while(temp)
            {
                
                new_num = new_num*10 + temp%10;
                temp /= 10;
            }
            distinct.insert(new_num);
            new_num=0;
        }
        
        return distinct.size();
        
    }
};