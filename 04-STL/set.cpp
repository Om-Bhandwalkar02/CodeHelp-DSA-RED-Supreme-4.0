#include "iostream"
#include "set"
#include "unordered_set"

using namespace std;

int main(){

    unordered_set<int> st;

    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);
    st.insert(16);

    //traverse karo

    unordered_set<int>::iterator it = st.begin();

    while (it != st.end())
    {
        cout << *it << " ";
        it++;
    }
    
    cout << endl;

    // cout << st.size()  << endl;
    // st.clear();
    // cout << st.size() << endl;

    if(st.empty()){
        cout << "set is empty" << endl;
    }
    else{
        cout << "set is not empty" << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    
    // cout << st.size() << endl;
    // st.erase(st.begin(), st.end());
    // cout << st.size() << endl;

    // cout << endl;
    // cout << endl;

    if (st.find(10) != st.end())
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    

    if (st.count(10) == 1)
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}