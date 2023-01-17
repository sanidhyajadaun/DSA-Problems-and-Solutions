class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int max=-1,cal;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                cal = (nums[i]-1)*(nums[j]-1);
                if(cal>max)
                {
                    max=cal;
                }
            }
        }
        return max;
    }
};