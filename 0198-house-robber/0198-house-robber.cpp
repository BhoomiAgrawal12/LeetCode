// class Solution {
// public:
//     int f(int n,vector<int>& nums,vector<int>& dp){
//         if(n==0)return nums[n];
//         if(n<0)return 0;
//         if(dp[n]!=-1)return dp[n];
//         int pick=nums[n]+f(n-2,nums,dp);
//         int notpick=0+f(n-1,nums,dp);
//         return dp[n]= max(pick,notpick);
//     }
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>dp(n,-1);
//         return f(n-1,nums,dp);
//     }
// };

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev1=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int pick=nums[i];
            if(i>1)pick+=prev2;
        int notpick=0+prev1;
        int curr= max(pick,notpick);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};