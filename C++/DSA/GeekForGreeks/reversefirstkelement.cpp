#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k){

    //algo
    //step 1: pop first k from the queue and put into stack.
    stack<int>s ;
    for(int i=0;i<k;i++){
        int vol=q.front();
        q.pop();
        s.push(vol);
    }

    //step 2 :push back the k element from stack to the queue
    while(!s.empty()){
        int vol=s.top();
        s.pop();
        q.push(vol);
    }

    //step 3: take the n-k elemnt from the stack and put it into the end of the queue

    int t=q.size()-k;
    while(t--){
        int vol =q.front();
        q.pop();
        q.push(vol);
    }

    return q;
}

int main() {
    queue<int> q;
    int n, k, element;

    cout << "Enter number of elements in queue: ";
    cin >> n;
    
    cout << "Enter elements of queue: ";
    for (int i = 0; i < n; i++) {
        cin >> element;
        q.push(element);
    }

    cout << "Enter value of k: ";
    cin >> k;

    if (k > n || k <= 0) {
        cout << "Invalid value of k!" << endl;
        return 0;
    }

    queue<int> modifiedQueue = modifyQueue(q, k);

    cout << "Modified queue: ";
    while (!modifiedQueue.empty()) {
        cout << modifiedQueue.front() << " ";
        modifiedQueue.pop();
    }
    cout << endl;

    return 0;
}

