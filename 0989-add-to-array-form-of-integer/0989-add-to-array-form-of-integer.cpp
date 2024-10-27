class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
         int n=nums.size();
	    int carry=0,digit;
	    int i=n-1;
		while(k || i>=0){
		   if(i>=0) {digit=k%10;
		    k/=10;
		    nums[i]=nums[i]+digit+carry;
		    if(nums[i]>9){
		        nums[i]%=10;
		        carry=1;
		    }
		    else carry=0;
		    i--;}
            else{
                digit=k%10+carry;
                 if(digit>9){
		        digit%=10;
		        carry=1;
		    }
		    else carry=0;
            
		    k/=10;
                nums.insert(nums.begin(), digit);}
		}if(carry)nums.insert(nums.begin(), 1);
		return nums;
    }
};