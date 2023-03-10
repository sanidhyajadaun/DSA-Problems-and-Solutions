class Solution {
public:
    int countVowelStrings(int n) {
       vector<int> dp = {1,1,1,1,1};
        
        for(int i=0;i<n;i++){
            vector<int> t = dp;
            dp[0] = accumulate(dp.begin(), dp.end(), 0);
            for(int j=1;j<5;j++){
                dp[j] = dp[j-1] - t[j-1];
            }
        }
        return dp[0]; 
    }
};