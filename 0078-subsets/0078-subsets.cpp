class Solution {
public:
    void calc(int i,vector<vector<int>>& sol,vector<int>& ds,vector<int>& nums) {
if(i>nums.size()-1)  {
    sol.push_back(ds);
    return;
}
        
            ds.push_back(nums[i]);
            calc(i+1,sol,ds,nums);
            ds.pop_back();
            calc(i+1,sol,ds,nums);
        
        
        
        }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int>ds;
        calc(0,sol,ds,nums);
        return sol;
    }
};