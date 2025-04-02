#include <iostream>
#include <vector>
#include <algorithm> // For max()

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum_so_far = 0;
        int max_sum = nums[0]; // Initialize max_sum with the first element
        
        // Iterate through the array
        for (int i = 0; i < n; i++) {
            sum_so_far += nums[i];  // Add the current element to the running sum
            
            // If sum_so_far becomes negative, reset it to 0
            if (sum_so_far < 0) {
                sum_so_far = 0;
            }

            // Update max_sum if sum_so_far is greater
            max_sum = max(sum_so_far, max_sum);
        }

        return max_sum;  // Return the maximum sum found
    }
};

int main() {
    Solution sol;  // Create an object of the Solution class
    
    // Sample input array
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    // Find and print the maximum subarray sum
    int result = sol.maxSubArray(nums);
    cout << "Maximum subarray sum: " << result << endl;  // Output: 6
    
    return 0;
}
