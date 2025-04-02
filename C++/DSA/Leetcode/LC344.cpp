#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0, e = s.size() - 1;
        while (st < e) {
            swap(s[st++], s[e--]);
        }
    }
};

void printVector(const vector<char>& s) {
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    cout << "Original string: ";
    printVector(s);
    
    sol.reverseString(s);
    
    cout << "Reversed string: ";
    printVector(s);
    
    return 0;
}