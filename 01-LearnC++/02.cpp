#include "iostream"
using namespace std;

int main(){

    //Variable Definition
    int age = 20;
    cout << "Om's age is " << age << endl;
    
    //Variable Declaration
    int age2;
    cout << "Garbage Value: " << age2 << endl;

    //Variable Initialization
    age2 = 21;
    cout << "Om's age is " << age2 << endl;

    //Variable Manipulation / Modification / Updation
    age2 = 22;
    cout << "Om's age is " << age2 << endl;

    //int
    int a = 10;
    cout << "Value of a is " << a << endl;

    //float
    float b = 10.5f;
    cout << "Value of b is " << b << endl;

    //char
    char c = 'A';
    cout << "Value of c is " << c << endl;

    //double
    double d = 30.5;
    cout << "Value of d is " << d << endl;

    //bool
    bool e = true;
    cout << "Value of e is " << e << endl;

    //sizeof() operator
    cout << "Size of int is " << sizeof(int) << " bytes" << endl;
    cout << "Size of float is " << sizeof(float) << " bytes" << endl;
    cout << "Size of char is " << sizeof(char) << " bytes" << endl;
    cout << "Size of double is " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes" << endl;
    
    return 0;
}
