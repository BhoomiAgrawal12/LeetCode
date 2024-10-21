class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0,l=0,maxlen=0,fre=0,len=0;
        map<int,int>hash;
        while(r<s.size()){
            hash[s[r]-'A']++;
             len=r-l+1;
            fre=max(fre, hash[s[r]-'A']);
            if(len-fre>k){
                hash[s[l]-'A']--;
                l++;
                fre=0;
            }
                         len=r-l+1;
            if(len-fre<=k){
                maxlen=max(len,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};