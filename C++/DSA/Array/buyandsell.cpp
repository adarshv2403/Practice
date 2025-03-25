#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:

    int maxprofit(vector<int> &prices){

        int minsofar=prices[0];
        int maxprofit=0;
        int n=prices.size();

        for(int i=1;i<n;i++){
    
        minsofar=min(prices[i],minsofar);

        maxprofit=max(maxprofit,prices[i]-minsofar);

        }
        return maxprofit;

    }
};

int main(){
    vector<int> prices={10,9,25,3,78,25};
    Solution sol;
    cout<<" the max profit we earned is: "<<sol.maxprofit(prices);
}