#include<bits/stdc++.h>
class Solution {
     int houserob(vector<int>& nums) {
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
public:
    int rob(vector<int>& nums) {
         if (nums.size() == 1) return nums[0];
        vector<int>temp1,temp2;
        for(int i=0;i<nums.size();i++){
            if(i>0)temp1.push_back(nums[i]);
            if(i<nums.size()-1)temp2.push_back(nums[i]);
        }
        return max(houserob(temp1),houserob(temp2));
    }
};