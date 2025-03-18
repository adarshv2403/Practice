#include<bits/stdc++.h>
#include<iostream>

using namespace std;
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;

        int max_window_size=0;
        int curr_sum=0;
        int xor_sum=0;
        while(right<n){
            curr_sum+=nums[right];
            xor_sum^=nums[right];
            while(curr_sum!=xor_sum){
                curr_sum-=nums[left];
                xor_sum^=nums[left];
                left++;
            }
            max_window_size=max(max_window_size,right-left+1);
            right++;
        }
        return max_window_size;
    }
};

int main(){
     vector<int> nums = {1, 3, 8, 48, 10};
    Solution sol;
    cout << "Longest Nice Subarray Length: " << sol.longestNiceSubarray(nums) << endl;
    return 0;
}