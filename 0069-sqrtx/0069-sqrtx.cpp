class Solution {
public:
    int mySqrt(int x) {
         if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    int mid,low=1,high=x,ans;
    while(low<=high){
        mid=low+(high-low)/2;
        if(mid==x/mid)
        return mid;
        else if(mid<x/mid){
            low=mid+1;
            ans =mid;
        }
        
        else high=mid-1;
    }
    return ans;
    }
};