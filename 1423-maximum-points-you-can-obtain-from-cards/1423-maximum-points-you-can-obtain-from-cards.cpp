class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int maxScore=0,lmax=0,rmax=0,rindex=n-1,sum=0;
        for(int i=0;i<k;i++){
            lmax=lmax+cardPoints[i];
           
        }
         maxScore=lmax;
        for(int i=k-1;i>=0;i--){
            rmax+=cardPoints[rindex];
            rindex--;
            lmax-=cardPoints[i];
            sum=lmax+rmax;
                    maxScore=max(maxScore,sum);

        }
        return maxScore;
    }
};