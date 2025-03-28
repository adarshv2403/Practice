#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans; 
        int i=0;
        int j=n;

        while(i<n && j<nums.size()){
            ans.push_back(nums[i++]);
            ans.push_back(nums[j++]);
        }

        return ans;
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    vector<int> nums(2*n);

    for(int i=0;i<2*n;i++){
        cin>>nums[i];
    }
    
    vector<int> result=sol.shuffle(nums,n);
    cout<<"shuffled array:";

    for(int i=0;i<2*n;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

    return 0;
}