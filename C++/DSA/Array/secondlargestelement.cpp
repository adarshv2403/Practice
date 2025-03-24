#include<iostream>
#include<vector>

using namespace std;

int getsecondlargest(vector<int> &arr){
    int largest=-1, secondlargest=-1;
    int n=arr.size();

    //traversing the array 
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }

        else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}

int main(){
    vector<int> arr={95,48,46,17,88};
    cout<<"the second largest element in the array is: "<<getsecondlargest(arr);
    return 0;
}