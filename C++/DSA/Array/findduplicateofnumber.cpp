#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:

int findduplicate(vector<int> &nums){
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
 }
};

int main(){
    Solution sol;
    vector<int> nums={1,2,3,1,1};
    cout<<"the duplicate element is:"<<" "<<sol.findduplicate(nums);
    return 0;
}

/*complexity
time o(n)
space o(1)
*/