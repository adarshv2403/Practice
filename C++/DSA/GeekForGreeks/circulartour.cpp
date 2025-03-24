#include<iostream>

using namespace std;

struct petrolpump {
    int petrol;
    int distance;
};

class Solution{
    public:

    int tour(petrolpump p[],int n){
        int deficit =0;
        int balance =0;
        int start=0;

        for(int i=0;i<n;i++){
            balance += p[i].petrol -p[i].distance;

            if(balance<0){
                deficit+=balance;
                start=i+1;
                balance=0;
            }
        }

        if(deficit+balance>=0){
            return start;
        }
        else{
            return -1;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of petrol pumps: ";
    cin >> n;

    petrolpump p[n];  // Array of petrol pumps

    cout << "Enter petrol and distance for each pump:\n";
    for (int i = 0; i < n; i++) {
        cin >> p[i].petrol >> p[i].distance;
    }

    Solution solution;
    int result = solution.tour(p, n);

    if (result == -1)
        cout << "No possible tour\n";
    else
        cout << "Start the tour from petrol pump index: " << result << endl;

    return 0;
}