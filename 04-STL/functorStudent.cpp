#include "iostream"
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


class StudentComparator{
    public:
        bool operator()(Student a, Student b){
            return a.marks > b.marks;
        }
};


int main(){

    Student s1;
    Student s2;

    s1.marks = 90;
    s1.name = "Om";

    s2.marks = 95;
    s2.name = "Ishanya";

    StudentComparator cmp;

    if (cmp(s1, s2)){
        cout << s1.name << " has more marks than " << s2.name << endl;
    }
    else{
        cout << s2.name << " has more marks than " << s1.name << endl;
    }
    
    return 0;
}