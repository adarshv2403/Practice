#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
 void avg(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        float slow =nums[i];
        float fast=nums[i+1];
        float avg=(slow+fast)/2;
        cout<<avg<<" ";
    }
    cout<<endl;
  }
};


int main(){
    Solution sol; //solution class
    vector<int> nums={1,5,6,9,11}; //array
    sol.avg(nums); //calling function
    return 0;
}