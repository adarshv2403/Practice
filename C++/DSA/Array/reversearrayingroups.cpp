#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
    public:
    
    void reversekgroup( vector<int>&nums,int k){
        int n=nums.size();

        for(int i=0;i<n;i+=k){
            int left=i;
            int right=min(i+k-1,n-1);

            while(left<right){
            swap(nums[left++],nums[right--]);
            }
        }
    }
};

int main(){
    Solution sol;
    vector<int> nums={1,2,3,4,5,6,7,8};
    int k=3;

    sol.reversekgroup(nums,k);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}