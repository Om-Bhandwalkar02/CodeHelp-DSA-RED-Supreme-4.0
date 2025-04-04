#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;


class compartor{
public:
    bool operator()(int a, int b){
        return a > b; // for descending order
    }
};

int main(){

    vector<int> v;

    v.push_back(20);
    v.push_back(10);
    v.push_back(15);

    //ascending order
    sort(v.begin(), v.end());
    //print
    for(int i: v){
        cout << i << " ";
    }
    cout << endl;

    cout << endl;


    //descending order
    sort(v.begin(), v.end(), compartor());
    //print
    for(int i: v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}