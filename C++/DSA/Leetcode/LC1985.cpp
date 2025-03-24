#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution {
    public:

    static bool compare(const string &a, const string &b){
        if(a.size()!=b.size())
           return a.size()<b.size(); //based on the length of the string 
        return a<b;  //if same length then based on digit comparision
    }

    string kthLargestNumber(vector <string> & nums,int k){
        int n=nums.size();

        sort(nums.begin(),nums.end(),compare);
        return nums[n-k];
    }
};

int main() {
    vector<string> nums = {"3", "6", "2", "10", "200"}; // Example input
    int k = 2;

    Solution sol;
    cout << "The " << k << "-th largest number is: " << sol.kthLargestNumber(nums, k) << endl;

    return 0;
}

