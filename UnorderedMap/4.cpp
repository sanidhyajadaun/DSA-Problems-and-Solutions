class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        int n = nums.size();
        int k = ceil(n/2);
        int count = 0;
        for(int i=0;i<n;i++){
            hashmap[nums[i]]++;
        }  
        for(auto it : hashmap){
            if(it.second > k){
                count = it.first;
            }
        }
        return count;
    }
};