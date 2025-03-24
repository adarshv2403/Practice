#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
    public:

    void pushZerostoEnd(vector<int> &nums){
        int n=nums.size();
        int count=0;

        for(int i=0; i<n; i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[count]);
                count++;
            }
        }
    }
};

int main(){
    vector<int> nums={9,5,0,4,0,8,0};
    Solution sol;
    sol.pushZerostoEnd(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}