class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mn = prices[0];
        int profit =0;
        
        for(int i=1; i< prices.size(); i++){
            if(prices[i] < mn)
                mn = prices[i];
            else
                profit = max(profit, prices[i]-mn);
        }
        return profit;
    }
};

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
