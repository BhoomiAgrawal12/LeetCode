class Solution {
  
         void calc(int ind, vector<vector<int>>& sol, vector<int>& ds, vector<int>& nums) {
        // Base case: Add the current subset
        sol.push_back(ds);

        for (int i = ind; i < nums.size(); i++) { 
            // Skip duplicates
            if (i > ind && nums[i] == nums[i - 1]) continue;

            ds.push_back(nums[i]);         // Include the current element
            calc(i + 1, sol, ds, nums);    // Recurse with next index
            ds.pop_back();                 // Backtrack to explore other subsets
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> sol;
        vector<int>ds;
        calc(0,sol,ds,nums);
        return sol;
    }
};