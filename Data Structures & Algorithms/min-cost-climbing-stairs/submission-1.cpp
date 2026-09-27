class Solution {
   public:

    int count(int n , vector<int>& cost , vector<int>& dp) {
        if (n > cost.size() - 1) return 0;

        if (dp[n] != 0) return dp[n];


        return dp[n] = min(cost[n] + count(n+1 , cost , dp) , cost[n] + count(n+2 , cost , dp));
    }  

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n);
        return min (count(0, cost , dp) , count(1, cost , dp));
    }
};
