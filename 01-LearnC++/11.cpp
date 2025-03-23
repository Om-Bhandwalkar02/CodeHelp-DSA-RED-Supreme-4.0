#include "iostream"
using namespace std;

int main(){

    // Type Conversion
    // Implicit Type Conversion
    int a = 10;
    float b = 20.5;

    // int c = a + b;
    float c = a + b;
    cout << c << endl;

    char ch = 'A';
    int d = ch + 1;
    char e = ch + 1;
    cout << d << endl;
    cout << e << endl;



    cout << endl << endl;

    // Explicit Type Conversion
    // Syntax: (type)expression
    // Casting Operator (type) 

    double pi = 3.1415962637;
    int intPi = (int)pi;
    cout << intPi << endl;

    float floatingNumber = 65.14;
    char charValue = (char)floatingNumber;
    cout << charValue << endl;

    int m = 10;
    int n = 3;

    // float o = m / n;
    float o = m / (float)n;
    cout << o << endl;

    int xxx = 65;
    float yyy = xxx;

    cout << yyy << endl;

    return 0;
}