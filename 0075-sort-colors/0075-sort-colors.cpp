class Solution {
public:
    void sortColors(vector<int>& A) {
         int l = 0;          // Pointer for the next position of 0
    int r = A.size() - 1; // Pointer for the next position of 2
    int current = 0;    // Current pointer to traverse the array

    while (current <= r) {
        if (A[current] == 0) {
            swap(A[l], A[current]);
            l++;
            current++;
        } else if (A[current] == 1) {
            current++;
        } else {
            swap(A[current], A[r]);
            r--;
        }
    }
    }
};