#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:

    void wavearray(vector<int> &nums){
        int n=nums.size();
        for(int i=0;i<n;i+=2){
            if(i>0 && nums[i]>nums[i-1]){
                swap(nums[i],nums[i-1]);
            }
            if(i<n-1 && nums[i]> nums[i+1]){
                swap(nums[i],nums[i+1]);
            }
        }
    }
};

int main(){
    vector<int> nums={10,20,3,4,25,28,4,67,9};
    Solution sol;
    sol.wavearray(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}