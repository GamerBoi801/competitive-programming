#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << q.front() << endl; // shows last element of the queue
    q.pop(); // pop does removes the last element
    cout << q.front() << endl;


    // priority queue retrieval O(1)m insertion and removal O(log n)
    cout << "Priority queue" << endl;
    priority_queue<int> q;
    
    return 0;
}