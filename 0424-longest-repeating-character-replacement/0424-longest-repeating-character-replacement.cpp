class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0,l=0,maxlen=0,fre=0;
        map<int,int>hash;
        while(r<s.size()){
            hash[s[r]-'A']++;
            fre=max(fre, hash[s[r]-'A']);
            if(r-l+1-fre>k){
                hash[s[l]-'A']--;
                l++;
                fre=0;
            }
            if(r-l+1-fre<=k){
                maxlen=max(r-l+1,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};