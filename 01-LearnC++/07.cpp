#include "iostream"
using namespace std;

int main(){

    for(int i=0; i<=10; i++){
        if(i == 5){
            break;
        }
        cout << i << " ";
    }
    cout << endl;
    for(int i=0; i<=10; i++){
        if(i == 5){
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    int i = 1;
    while(i<=5){
        cout << i << " ";
        i++;
    }
    cout << endl;


    for(char ch='a'; ch<='z'; ch++){
        cout << ch << " ";
    }
    cout << endl;

    for(char ch='A'; ch<='Z'; ch++){
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}