class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        auto atMost = [&](int target) {
            if(target<0)return 0;
            int count = 0, left = 0, currentSum = 0;
            for (int right = 0; right < nums.size(); right++) {
                currentSum += nums[right];
                while (currentSum > target) {
                    currentSum -= nums[left++];
                }
                count += (right - left + 1);
            }
            return count;
        };

        // The number of subarrays with exactly 'goal' is:
        return atMost(goal) - atMost(goal - 1);
    
    }
};