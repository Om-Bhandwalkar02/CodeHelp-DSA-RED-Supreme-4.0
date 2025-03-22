#include "iostream"
using namespace std;

int main(){

    int grade = 'C';

    switch (grade)
    {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good!" << endl;
        break;
    case 'C':
        cout << "Well done!" << endl;
        break;
    case 'D':   
        cout << "You passed!" << endl;
        break;
    case 'F':
        cout << "Better try again!" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
    }

    return 0;
}