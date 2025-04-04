#include "iostream"
#include "vector"
#include "algorithm"
#include "queue"

using namespace std;


class Student{
    public:
        int marks;
        string name;
        Student(){

        }
        Student(int m, string n){
            this->marks = m;
            this->name = n;
        }
};


class comparator{
    public:
        bool operator()(Student a, Student b){
         // criteria -> min marks -> high priority
         //pr yaha pe max marks -> high priority milegi yaha pe
         return a.marks < b.marks;
        }
};

int main(){

    //max heap
    priority_queue<int> pq;
    priority_queue<int, vector<int>, less<int>> pq1;

    //min heap
    priority_queue<int, vector<int>, greater<int>> pq2;



    priority_queue<Student, vector<Student>, comparator> pq3;

    pq3.push(Student(90, "Om"));
    pq3.push(Student(95, "Gaurav"));
    pq3.push(Student(85, "Hrishikesh"));
    pq3.push(Student(100, "Shubham"));

    cout << pq3.top().marks << " " << pq3.top().name << endl;
    pq3.pop();
    cout << pq3.top().marks << " " << pq3.top().name << endl;
    pq3.pop();
    cout << pq3.top().marks << " " << pq3.top().name << endl;
    pq3.pop();
    cout << pq3.top().marks << " " << pq3.top().name << endl;
    pq3.pop();
    
    return 0;
}