#include "iostream"
#include "cmath"
using namespace std;    

int decimalToBinaryMethod1(int n){
    int binaryNumber = 0;
    int i = 0;

    while(n!=0){
        int bit = n % 2;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        n = n / 2;
    }

    return binaryNumber;
}

int decimalToBinaryMethod2(int n){
    int binaryNumber = 0;
    int i = 0;

    while (n!=0)
    {
        int bit = n & 1;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        n = n >> 1;
    }
    
    return binaryNumber;
}

int binaryToDecimal(int n){
    int decimalNumber = 0;
    int i = 0;
    while (n!=0)
    {
        int bit = n % 10;
        decimalNumber = decimalNumber + bit * pow(2, i++);
        n = n / 10;
    }
    return decimalNumber;
}


int main(){

    int number = 10;
    cout << decimalToBinaryMethod1(number) << endl;
    cout << decimalToBinaryMethod2(number) << endl;

    int binary = 1010;
    cout << binaryToDecimal(binary) << endl;

    return 0;
}