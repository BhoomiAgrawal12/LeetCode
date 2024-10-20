class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxone=0,maxvalue=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                maxone++;
            }
            else maxone=0;
             maxvalue=max(maxvalue,maxone);
        }
       
        return maxvalue;
    }
};