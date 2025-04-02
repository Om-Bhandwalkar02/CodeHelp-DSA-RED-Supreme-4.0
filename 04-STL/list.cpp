#include "iostream"
#include "list"
using namespace std;


int main(){

    list<int> myList;

    //insertion
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    myList.push_front(5);
    myList.push_front(1);
    myList.push_front(0);

    //removal
    myList.pop_back();
    myList.pop_front();

    cout << myList.size() << endl;
    // myList.clear();
    // cout << myList.size() << endl;

    if (myList.empty()) {
        cout << "List is empty" << endl;
    } else {
        cout << "List is not empty" << endl;
    }
    

    cout << myList.front() << endl;
    cout << myList.back() << endl;

    // traversing 
    list<int>::iterator it = myList.begin();
    while (it != myList.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // using for loop
    for (list<int>::iterator it = myList.begin(); it != myList.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // using for each loop
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    // using reverse iterator
    list<int>::reverse_iterator rit = myList.rbegin();
    while (rit != myList.rend()) {
        cout << *rit << " ";
        rit++;
    }
    cout << endl;

    // using for each loop with reverse iterator
    for (list<int>::reverse_iterator rit = myList.rbegin(); rit != myList.rend(); rit++) {
        cout << *rit << " ";
    }
    cout << endl;
    
    myList.remove(20);
    cout << "After removing 20: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    list<int> l2;
    l2.push_back(4);
    l2.push_back(5);
    l2.push_back(6);

    // swap
    cout << "Before swap: " << endl;
    cout << "l1: ";
    for (int x : l1) {
        cout << x << " ";
    }
    cout << endl;
    cout << "l2: ";
    for (int x : l2) {
        cout << x << " ";
    }
    cout << endl;

    
    
    
    l1.swap(l2);




    cout << "After swap: " << endl;
    cout << "l1: ";
    for (int x : l1) {
        cout << x << " ";
    }
    cout << endl;
    cout << "l2: ";
    for (int x : l2) {
        cout << x << " ";
    }
    cout << endl;

    list<int> l3;
    l3.push_back(1);
    l3.push_back(2);
    l3.push_back(3);


    // insert
    l3.insert(l3.begin(), 0);
    l3.insert(l3.end(), 4);



    //iterator
    list<int>::iterator it2 = l3.begin();
    while (it2 != l3.end()) {
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;
    

    l3.erase(l3.begin(), l3.end());

    return 0;
}