class Solution {
public:
    int trap(vector<int>& A) {
         int n=A.size();
    int leftmin[n],rightmax[n];
    leftmin[0]=A[0];
    rightmax[n-1]=A[n-1];
    int rmax=A[n-1];
    int lmin=A[0];
    for(int i=n-2;i>=0;i--){
        if(A[i]>rmax){
            rmax=A[i];
          rightmax[i]=  A[i];
        }
        else rightmax[i]=rmax;
        
    }
    int total=0;
    for(int i=0;i<n;i++){
        if(i==0){
             leftmin[0]=A[0];
        }
         if(A[i]>lmin){
            lmin=A[i];
          leftmin[i]=  A[i];
        }
        else leftmin[i]=lmin;
        total+= min(leftmin[i],rightmax[i])-A[i];
    }
    return total;
    }
};