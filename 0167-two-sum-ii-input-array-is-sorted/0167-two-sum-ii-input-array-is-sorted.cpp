class Solution {
public:
    vector<int> twoSum(vector<int>& A, int B) {
        vector<int> ans;
        int l = 0, r = A.size() - 1;

        while (l < r) { // Continue while left pointer is less than right pointer
            int sum = A[l] + A[r]; // Calculate the sum of the two pointers

            if (sum == B) {
                ans.push_back(l + 1); // Store 1-indexed position
                ans.push_back(r + 1);
                return ans; // Found the solution, return immediately
            } 
            else if (sum < B) {
                l++; // Move left pointer to the right for a larger sum
            } 
            else {
                r--; // Move right pointer to the left for a smaller sum
            }
        }
        
        return ans; // If no pair found, return empty vector
    }
};
