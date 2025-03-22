#include "iostream"
using namespace std;

int main(){

    int a = 5;
    cout << a << endl;

    cout << (a++) << endl; // 5
    cout << a << endl; // 6

    cout << (++a) << endl; // 7
    cout << a << endl; // 7

    cout << (a--) << endl; // 7
    cout << a << endl; // 6

    cout << (--a) << endl; // 5
    cout << a << endl; // 5
    cout << endl;


    int num1 = 10;
    int num2 = 5;

    cout << endl;
    cout << (num1 + num2) << endl;
    cout << (num1 - num2) << endl;
    cout << (num1 * num2) << endl;
    cout << (num1 / num2) << endl;
    cout << (num1 % num2) << endl;
    
    cout << endl;
    
    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;

    cout << endl;

    bool cond1 = true;
    bool cond2 = false;
    bool cond3 = true;

    cout << (cond1 && cond2 && cond3) << endl;
    cout << (cond1 || cond2 || cond3) << endl;
    cout << (!cond1) << endl;
    cout << (!cond2) << endl;

    cout << endl;

    bool condition = (5!=10);
    cout << !condition << endl;
    
    cout << endl;

    int arr = 5;
    cout << arr << endl;

    arr += 10;
    cout << arr << endl;

    arr -= 5;
    cout << arr << endl;

    arr *= 2;
    cout << arr << endl;

    arr /= 4;
    cout << arr << endl;

    arr %= 2;
    cout << arr << endl;

    cout << endl;

    cout << (~1) << endl;
    cout << ((5<<1)) << endl;
    cout << ((5>>1)) << endl;
    cout << (5^5) << endl;
    cout << (5^6) << endl;


    return 0;
}