class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =  prices.size();
        int buyatprice = INT_MAX;
        int max_profit = 0;
        for(int i=0;i<n;i++){
            buyatprice = min(buyatprice,prices[i]);
            max_profit = max(max_profit,prices[i]-buyatprice);
        }
        return max_profit;
    }
};