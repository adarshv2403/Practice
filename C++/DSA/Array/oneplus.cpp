#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:

 void plusone(vector<int> &nums)
 {
    int n=nums.size();
    int carry=1;

    for(int i=n-1;i>=0;i--){
        int sum=nums[i]+carry;
        nums[i]=sum%10;
        carry=sum/10;
    }

    if(carry!=0){
        nums.insert(nums.begin(),1);
    }
 }
};

int main(){
    vector<int> nums={9,9,9};
    Solution sol;
    sol.plusone(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}

