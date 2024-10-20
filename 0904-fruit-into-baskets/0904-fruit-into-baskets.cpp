class Solution {
public:
    int totalFruit(vector<int>& fruits) {
         int l=0,r=0,maxone=0,maxlen=0;
        map<int,int>hash;
    while(r<fruits.size()){
                hash[fruits[r]]++;
        if(hash.size()>2){
             hash[fruits[l]]--;
               if(hash[fruits[l]]==0) hash.erase(fruits[l]);
                l++;
            }
        
        if(hash.size()<=2){
            maxlen=r-l+1;
            maxone=max(maxone,maxlen);
        }
        r++;
    }
    return maxone;
        
    }
};