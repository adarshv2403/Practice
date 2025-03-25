#include<iostream>

using namespace std;

class Solution{
    public:

    int getsum(int n)
    {
        int sum=0;

        while(n>0 || sum>9){

            if(n==0){
                n=sum;
                sum=0;
            }
        sum+=n%10;
        n=n/10;
    }
    return sum;
  }
};

int main(){
    int n=12345;
    Solution sol;
    cout<<"the sum of the digit is: "<<sol.getsum(n)<<endl;
    return 0;
}