class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int mod=pow(10,9)+7;
        vector<int>temp;
        
        for(int i=0;i<n;i++){
            int tempsum=0;
             for(int j=i;j<n;j++){
                 tempsum+=nums[j];
                 temp.push_back(tempsum);
             }
        }
        sort(temp.begin(),temp.end());
        long long int sum=0;
        for(int i=left-1;i<=right-1;i++){
            sum+=temp[i];
        }
        return sum%mod;
    }
};