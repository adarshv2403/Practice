#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxval = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    long long val = (long long)(nums[i] - nums[j]) * nums[k];
                    if (val > maxval) {
                        maxval = val;
                    }
                }
            }
        }
        return maxval;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    long long result = sol.maximumTripletValue(nums);

    cout << "Maximum Triplet Value: " << result << endl;

    return 0;
}
