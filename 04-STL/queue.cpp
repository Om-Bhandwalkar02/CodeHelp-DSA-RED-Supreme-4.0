#include "iostream"
#include "queue"

using namespace std;

int main(){

    // creation
    queue<int> q;

    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << q.size() << endl;

    // removal
    q.pop();

    cout << q.size() << endl;

    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
    

    cout << q.front() << endl;
    cout << q.back() << endl;

    queue<int> q1;
    queue<int> q2;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    q2.push(10);
    q2.push(20);
    q2.push(30);
    q2.push(40);

    // swpap
    q1.swap(q2);
    cout << q1.front() << q1.back() << endl;
    cout << q2.front() << q2.back() << endl;    
   
    return 0;
}