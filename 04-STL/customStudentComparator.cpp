#include "iostream"
#include "vector"
#include "algorithm"

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
            if(a.marks == b.marks){
                return a.name < b.name; // for ascending order
            }
            return a.marks < b.marks; // for ascending order
        }
};

int main(){

    vector<Student> v;

    v.push_back(Student(95, "Om"));
    v.push_back(Student(95, "Ishanya"));
    v.push_back(Student(0, "AIML club"));

    sort(v.begin(), v.end(), comparator());

    for(Student i: v){
        cout << i.marks << " " << i.name << endl;
    }

    return 0;
}