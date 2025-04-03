#include "iostream"
#include "stack"

using namespace std;

int main(){

    //creation
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.size() << endl;    

    st.pop();

    cout << st.size() << endl;

    cout << st.top() << endl;

    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is nottt empty" << endl;
    }
    

    stack<int> st1;
    stack<int> st2;

    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);

    st2.push(1);
    st2.push(2);
    st2.push(3);
    st2.push(4);

    st1.swap(st2);

    cout << st1.top() << endl;
    cout << st2.top() << endl;

    return 0;
}