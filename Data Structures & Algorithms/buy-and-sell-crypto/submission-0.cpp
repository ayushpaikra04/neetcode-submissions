class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int curr = prices[0];
        int maxProfit = 0;

        for (int i = 0 ; i < n ; i++) {
            if (prices[i] < curr) {
                curr = prices[i];
            }
            int profit = prices[i] - curr;

            maxProfit = max(maxProfit,profit);
        }

        return maxProfit;
    }
};
