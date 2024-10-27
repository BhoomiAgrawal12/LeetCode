class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0,twenty=0;
       for(int i=0;i<bills.size();i++){
           if(bills[i]==5)five++;
         else  if(bills[i]==10 &&five!=0){
               five--;
               ten++;
           }
          else if(bills[i]==20 && five!=0 ){
              if(ten==0){
                  five-=3;
                  if(five<0)return false;
              }
              else{ five--;
               ten--;}
               twenty++;
           }
           else return false;
       }
       return true;
    }
};