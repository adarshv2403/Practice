#include<bits/stdc++.h>
#include<iostream>

using namespace std;
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();//size of array 
        int left=0;//left pointer 
        int right=0;//right pointer

        //using 2 pointer window sliding problem
        int max_window_size=0;//variable
        int curr_sum=0;
        int xor_sum=0;

        //loop for adding values in curr and xor sum
        while(right<n){
            curr_sum+=nums[right];
            xor_sum^=nums[right];
            //cheacking the condition that sum is not equal
            while(curr_sum!=xor_sum){
                curr_sum-=nums[left];//removing that curr element from curr
                xor_sum^=nums[left];// as well as xor
                left++;//moving left pointer
            }
            max_window_size=max(max_window_size,right-left+1);//finding max window size
            right++;
        }
        return max_window_size;//returning value
    }
};

int main(){
     vector<int> nums = {1, 3, 8, 48, 10};
    Solution sol;
    cout << "Longest Nice Subarray Length: " << sol.longestNiceSubarray(nums) << endl;
    return 0;
}