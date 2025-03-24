#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
    public:
    
    int maxproduct(vector<int>&nums){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
        }

        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};

int main(){
    vector<int> nums={-10,-3,-5,-6,-20};
    Solution sol;

    cout<<"the product of max three no is: "<<sol.maxproduct(nums); 
}