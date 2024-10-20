class Solution {
public:
    int longestOnes(vector<int>& A, int B) {
         int l=0,r=0,zeros=0,maxone=0,maxlen=0;
    while(r<A.size()){
        if(A[r]==0)zeros++;
        if(zeros>B && l<=r){
            if(A[l]==0){
                zeros--;
                l++;
            }
            else l++;
        }
        if(zeros<=B){
            maxlen=r-l+1;
            maxone=max(maxone,maxlen);
        }
        r++;
    }
    return maxone;
    }
};