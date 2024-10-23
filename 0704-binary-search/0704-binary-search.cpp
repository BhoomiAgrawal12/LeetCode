class Solution {
public:
    int search(vector<int>& A, int B) {
        int n=A.size();
    int low=0,high=n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
       int midVal=A[mid];

        if (midVal == B) {
       return mid;
        }
        else if(midVal<B){low=mid+1;
        }
        else high = mid - 1;
    }
    return -1;
    }
};