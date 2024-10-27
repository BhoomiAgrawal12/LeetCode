class Solution {
public:
    int heightChecker(vector<int>& heights) {
         map<int,int>store;
        for(int i=0;i<heights.size();i++){
            store[i]=heights[i];
        }
        int cnt=0;
        sort(heights.begin(),heights.end());
         for(int i=0;i<heights.size();i++){
            if(store[i]!=heights[i])cnt++;
        }
        return cnt;
    }
};