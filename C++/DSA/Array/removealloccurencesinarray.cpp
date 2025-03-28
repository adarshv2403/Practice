#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:

    int occurences(vector<int> &nums,int element){
        int k=0;
        int n=nums.size();

        for(int i=0;i<n;i++){

            if(nums[i]!=element){
                nums[k]=nums[i];
                k++;
            }

        }
        return k;
    }
};

int main(){
    Solution sol;
    vector<int> nums={1,2,3,2,4,2,8};
    int element=2;

    cout<<sol.occurences(nums,element);

   /* for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" "; 
    } */
}
