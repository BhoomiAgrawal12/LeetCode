class Solution {
public:
    int lengthOfLongestSubstring(string A) {
        int hash[256];//it is not a map,it is just a name of the array to check duplicates;
   memset(hash, -1, sizeof(hash));
    int l=0,r=0,len=0,maxsum=0;
    while(r<A.size()){
        if(hash[A[r]]!=-1){
            if(hash[A[r]]>=l){
                l=hash[A[r]]+1;
            }
        }
        len=r-l+1;
        maxsum=max(maxsum,len);
        hash[A[r]]=r;
        r++;
    }
    return maxsum;
    }
};