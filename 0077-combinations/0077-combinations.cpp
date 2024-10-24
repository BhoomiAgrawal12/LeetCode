class Solution {
public:
    void combination(int start,int n,int k, vector<vector<int>>& ans,vector<int>& ds){
            if(ds.size()==k){
            ans.push_back(ds);
            return;}
        if(start>n)return;
                // Include the current number 'start' in the combination
            ds.push_back(start);
                    combination(start+1,n,k,ans,ds);
            ds.pop_back();
                // Exclude the current number and move to the next
                combination(start+1,n,k,ans,ds);
    }
    vector<vector<int>> combine(int n, int k) {
         vector<vector<int>>ans;
        vector<int>ds;
        combination(1,n,k,ans,ds);
        return ans;
    }
};