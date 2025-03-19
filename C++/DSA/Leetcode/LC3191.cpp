#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void flipwindow(vector<int>& nums, int i) {
        nums[i] ^= 1;
        nums[i + 1] ^= 1;
        nums[i + 2] ^= 1;
    }

public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int operations = 0;

        for (int i = 0; i < n - 2; i++) {
            if (nums[i] == 1)
                continue;
            flipwindow(nums, i);
            operations++;
        }

        if (nums[n - 2] == 0 || nums[n - 1] == 0) {
            return -1;
        }
        return operations;
    }
};

int main() {
    vector<int> nums = {0, 0, 1, 1, 0}; // Example input
    Solution sol;
    int result = sol.minOperations(nums);
    cout << "Minimum operations: " << result << endl;
    return 0;
}