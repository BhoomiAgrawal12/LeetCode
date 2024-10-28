class Solution {
public:
    int commonFactors(int a, int b) {
         int num=0;
        int small;
        if(a>b)small=b;
        else small=a;
        for(int i=1;i<=small;i++){
            if(a%i==0 && b%i==0)num++;
        }
        return num;
    }
};