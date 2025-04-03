#include "iostream"
#include "queue"
using namespace std;

int main(){
    
    //max-heap -> maximum value -> Highest Priority
    priority_queue<int> pq;
    //max-heap -> maximum value -> Highest Priority
    // Jo bada ....woh sabse aage khada
    pq.push(10);
    pq.push(20);
    pq.push(900);
    pq.push(40);
    pq.push(50);


    cout << pq.top() << endl; // 900, 50, 40, 20, 10
    cout << pq.size() << endl; 

    pq.pop(); // 900
    
    cout << pq.top() << endl; // 50, 40, 20, 10
    cout << pq.size() << endl; 

    if (pq.empty())
    {
        cout << "pq is empty" << endl;
    }
    else {
        cout << "pq is nott empty" << endl;
    }
 
    
    // min-heap - Minimum value -> Highest Priority
    priority_queue< int, vector<int>, greater<int> > pq1;

    pq1.push(100);
    pq1.push(200);
    pq1.push(300);
    pq1.push(500);
    pq1.push(800);
    pq1.push(600);
    pq1.push(10);
    pq1.push(-11110);


    cout << pq1.top() << endl; // -11110
    pq1.pop();
    cout << pq1.top() << endl; // 10

    
    return 0;
}