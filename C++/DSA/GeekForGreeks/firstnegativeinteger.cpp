#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<long long> firstNegativeInK(long long int A[], long long int n, long long int k) {
    deque<long long int> dq;
    vector<long long> ans;

    // Process first window of size k 
    for (int i = 0; i < k; i++) {
        if (A[i] < 0) {
            dq.push_back(i);
        }
    }

    // Store result for the first k-sized window
    if (!dq.empty()) {
        ans.push_back(A[dq.front()]);
    } else {
        ans.push_back(0);
    }

    // Process the remaining windows
    for (int i = k; i < n; i++) {
        // Remove elements out of this window
        if (!dq.empty() && i - dq.front() >= k) {
            dq.pop_front();
        }

        // Add new element if it is negative
        if (A[i] < 0) {
            dq.push_back(i);
        }

        // Store result
        if (!dq.empty()) {
            ans.push_back(A[dq.front()]);
        } else {
            ans.push_back(0);
        }
    }

    return ans;
}

int main() {
    long long int A[] = {12, -1, -7, 8, -15, 30, 16, 28};
    long long int k = 3;
    long long int n = sizeof(A) / sizeof(A[0]);

    vector<long long> result = firstNegativeInK(A, n, k);

    cout << "First negative integer in every window of size " << k << ": ";
    for (long long num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}