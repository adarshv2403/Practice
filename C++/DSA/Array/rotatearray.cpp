#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    void reversethearray(vector<int>&arr,int d){
        int n=arr.size();

        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());

    }
};

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int d=2;
    Solution sol;
    sol.reversethearray(arr,d);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}