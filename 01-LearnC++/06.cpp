#include "iostream"
using namespace std;

int main(){

    int age = 22;

    (age > 18) ? cout << "Adult" : cout << "Not Adult";

    int x = 10;
    int y = 20;

    int result = (x > y) ? x : y;
    
    cout << result;

    return 0;
}