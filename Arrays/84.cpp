class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,n=nums.size(),sum=0,count=INT_MAX;
        while(r<n){
            sum += nums[r++];
            while(sum>=target){
                count = min(count,r-l);
                sum -= nums[l++];
            }
        }
        return count == INT_MAX? 0: count;
    }
};