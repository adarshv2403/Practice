#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
    public:

    int finalValueAfterOperations(vector<string> &operations){
        int x=0;
         for(int i=0;i<operations.size();i++){
        if(operations[i] == "x++" ||operations[i] == "++x" ){
            x++;
        }
        else{
            x--;
        }
     }
        return x;

    }
};

int main(){
    Solution sol;
    vector<string> operations={"++x","x--","x++","++x"};

    cout<<"the number obtained after the operstions is: "<<sol.finalValueAfterOperations(operations);
}