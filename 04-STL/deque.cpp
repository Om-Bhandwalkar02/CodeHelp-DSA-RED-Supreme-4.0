#include "iostream"
#include "deque"
using namespace std;

int main(){

    // creation
    deque<int> dq;

    // insertion
    dq.push_back(10); //10
    dq.push_back(20); //10, 20
    dq.push_back(30); //10, 20, 30
    dq.push_back(40); //10, 20, 30, 40
    
    dq.push_front(5); //5, 10, 20, 30, 40
    dq.push_front(0); //0, 5, 10, 20, 30, 40
    dq.push_front(-5); //-5, 0, 5, 10, 20, 30, 40
    dq.push_front(-10); //-10, -5, 0, 5, 10, 20, 30, 40

    // removal 
    dq.pop_front(); //-5, 0, 5, 10, 20, 30, 40
    dq.pop_back(); // -5, 0, 5, 10, 20, 30,

    cout << dq.size() << endl;

    cout << dq.front() << endl;    
    cout << dq.back() << endl;

    if (dq.empty())
    {
        cout << "Deque is empty" << endl;
    }
    else{
        cout << "Deque is not empty" << endl;
    }


    deque<int>::iterator it = dq.begin();

    while (it!=dq.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;
    
    cout << dq[0] << endl;

    cout << dq.at(0) << endl;

    dq.insert(dq.begin(), 1000000);
    cout << dq[0] << endl;

    cout << dq.size() << endl;
    // dq.clear();
    cout << dq.size() << endl;

    
    cout << endl;
    cout << endl;


    cout << dq.size() << endl;
    dq.erase(dq.begin(), dq.end());
    cout << dq.size() << endl;

    
    return 0;
}