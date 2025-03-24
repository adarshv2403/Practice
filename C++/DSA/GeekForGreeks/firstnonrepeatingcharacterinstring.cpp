#include<iostream>
#include<queue>
#include<unordered_map>

using namespace std;

class Solution {
    public:

    string FirstNonRepeating(string A){
        unordered_map<char, int>count;
        queue<char> q;
        string ans="";

        for(int i=0; i<A.length(); i++){
            char ch =A[i];

            //increasing count 

            count[ch]++;

            //queue me push karo 

            q.push(ch);

            while(!q.empty()){
                if(count[q.front()]>1){
                    //repeating character
                    q.pop(); 
                }
                else{
                    ans.push_back(q.front());
                    break;
                }
            }
            if(q.empty())
            ans.push_back('#');
        }
        return ans;

    }
};

int main() {
    Solution solution;
    string A;

    cout << "Enter the string: ";
    cin >> A;

    string result = solution.FirstNonRepeating(A);
    cout << "Output: " << result << endl;

    return 0;
}
