#include "iostream"
using namespace std;

class functorOne{
    public:
        bool operator()(int a, int b){
            //descending order me compare karna chahte hain
            // if a>b -> true, a should be placed  before b
            //thats why ye descending order banata hai
            return a > b;
        }
};

int main(){ 

    functorOne cmp;
    
    if(cmp(10, 20)){
        cout << "10 is greater than 20" << endl;
    }
    else{
        cout << "20 is greater than 10" << endl;
    }


    return 0;
}