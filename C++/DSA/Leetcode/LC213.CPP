#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Helper function to solve the original House Robber problem (linear case)
    int robLinear(vector<int>& nums, int start, int end) {
        int prev2 = 0, prev1 = 0;
        
        for (int i = start; i <= end; i++) {
            int newrob = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = newrob;
        }
        
        return prev1;
    }

    // Main function to solve the circular version of House Robber
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        // Rob houses [0, n-2] or [1, n-1]
        return max(robLinear(nums, 0, n - 2), robLinear(nums, 1, n - 1));
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 2};
    cout << "Max profit = " << sol.rob(nums) << endl; // Output: 3
    return 0;
}
