#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    int rober(vector<int> &nums){
        int n=nums.size();
        int prev2=0,prev1=0;
        for(int i=0;i<n;i++){
            int newrob=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=newrob;
        }
        return prev1;
    }
};

int main(){
    Solution sol;
    vector<int> nums ={1,2,3,4,5,6};
    cout<<"max profit= "<<sol.rober(nums)<<endl;
}