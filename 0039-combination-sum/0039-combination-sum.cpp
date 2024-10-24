class Solution {
     void findcombination(int index,vector<int>& candidates, int target,vector<vector<int>>& ans,vector<int>& ds) {
         if(index==candidates.size()){
             if(target==0){
                 ans.push_back(ds);
             }
             return;
         }
        if(candidates[index]<=target){
            ds.push_back(candidates[index]);
             findcombination(index,candidates,target-candidates[index],ans,ds);
            ds.pop_back();
        }
                      findcombination(index+1,candidates,target,ans,ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
         findcombination(0,candidates,target,ans,ds);
        return ans;
    }
};