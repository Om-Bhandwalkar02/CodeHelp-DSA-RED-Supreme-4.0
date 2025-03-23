#include "iostream"
using namespace std;

void printCounting(){
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int sum(int a, int b){
    return a + b;
}

int getMultiplication(int a, int b){
    return a * b;
}

int main(){

    printCounting();
    cout << sum(5, 6) << endl;
    cout << getMultiplication(5, 6) << endl;
    int multiplication = getMultiplication(5, 6);
    cout << multiplication << endl;

    return 0;
}