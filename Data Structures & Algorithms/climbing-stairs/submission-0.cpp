class Solution {
public:

    int distinctWays(int n , vector<int>& dp) {
        if (n <= 1) return 1;
        if (dp[n] != -1) return dp[n];

        return dp[n] = distinctWays(n-1,dp) + distinctWays(n-2,dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return distinctWays(n,dp);
    }
};
