class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = prices[0];
        for(int i=0; i<prices.size(); i++)
        {
            int diff = prices[i]-mini;
            if(diff>profit){
                profit = diff;
            }
            if(prices[i]<mini){
                mini = prices[i];
            }
        }
        return profit;
    }
};