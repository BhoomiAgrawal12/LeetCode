class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
       
        string prev=countAndSay(n-1);
        string result="";
        for(int i=0 ;i<prev.length();i++){
            int cnt=1;
            char ch=prev[i];
            while(i<prev.length()-1 && prev[i]==prev[i+1]){
                i++;
                cnt++;
            }
            result+=to_string(cnt)+ch;
        }
        return result;
    }
};