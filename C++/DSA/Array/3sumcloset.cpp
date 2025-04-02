#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int threesumcloset(vector<int> &nums, int target){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int temp=nums[left]+nums[right]+nums[i];
                if(abs(target-temp)<diff){
                    ans=temp;
                    diff=abs(target-diff);
                }
                else if(temp==target) return ans;
                else if(temp>target)right--;
                else left++;
            }
        }
        return ans;
    }
};



int main(){
    Solution sol;
    vector<int> v={-1,2,1,-4};
    cout<<sol.threesumcloset(v,1);
}