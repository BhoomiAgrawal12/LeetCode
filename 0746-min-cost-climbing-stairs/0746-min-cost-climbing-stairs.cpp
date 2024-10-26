class Solution {
public:
    int calc(int n,vector<int>& cost,vector<int>& dp){
              if (n < 0) return 0;  // Base case: if n is negative, no cost is needed
        if (n == 0 || n == 1) return cost[n];  // Base cases for first two steps
        if(dp[n]!=-1)return dp[n];
        int left=calc(n-1,cost,dp)+cost[n];
        int right=calc(n-2,cost,dp)+cost[n];
         dp[n]=min(left,right);
        return dp[n];
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(calc(n - 1, cost, dp), calc(n - 2, cost, dp));
    }
};