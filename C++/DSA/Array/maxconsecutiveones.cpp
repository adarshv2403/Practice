#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int maxOnes(vector<int>&nums){
        int n=nums.size();
        int maxcount=0,count=0;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                maxcount=max(maxcount,count);
                count=0;
            }
        }

        return max(maxcount,count);
    }
};

int main(){
    vector<int> nums={1,0,1,0,0,0,1,0,1,1,1,1,1};
    Solution sol;
    cout<<"the max no of ones occured is: "<<sol.maxOnes(nums);
    return 0;
}