#include "iostream"
#include "vector"
#include "forward_list"
#include "list"
#include "deque"

using namespace std;

int main(){

    // create a vector of integers
    vector<int> v;
    
    // insert elements into the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // create an iterator to the vector
    vector<int>::iterator it = v.begin();

    while (it != v.end())
    {
        // print the value of the iterator
        cout << *it << " ";

        // increment the iterator
        it++;
    }
    cout << endl;
    

    cout << endl;
    cout << endl;



    // Forward iterator
    forward_list<int> flist; // Rename the forward_list object to avoid conflict

    // insert elements into the forward_list
    flist.push_front(10);
    flist.push_front(20);
    flist.push_front(30);
    flist.push_front(40);

    // traverse the forward_list using an iterator
    forward_list<int>::iterator it2 = flist.begin();

    while (it2 != flist.end())
    {
        // print the value of the iterator
        cout << *it2 << " "; // reading

        // increment the iterator
        it2++;
    }   

    cout <<  endl;
    cout << endl;



    it2 = flist.begin(); // resetting the iterator to the beginning
    while (it2 != flist.end())
    {
        // print the value of the iterator
        *it2 = *it2 + 5;// writing
        cout << *it2 << " "; 

        // increment the iterator
        it2++;
    }   
    cout <<  endl;


    cout << endl;

    // Bi-directional iterator
    list<int> l3; // Now this works correctly as std::list

    // insert elements into the list
    l3.push_back(100);
    l3.push_back(200);
    l3.push_back(300);

    // traverse the list using a bi-directional iterator
    list<int>::iterator it3 = l3.begin();

    cout << "Forward traversal of l3: ";
    while (it3 != l3.end())
    {
        cout << *it3 << " ";
        it3++;
    }  
    cout << endl;

    cout << "Backward traversal of l3: ";
    it3 = l3.end();
    while (it3 != l3.begin())
    {
        it3--;
        cout << *it3 << " ";
    }
    cout << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    // Random access iterator
    vector<int> v2 = {10, 20, 30, 40, 50};
    
    // traverse the vector using a random access iterator
    vector<int>::iterator it4 = v2.begin();

    while (it4 != v2.end())
    {
        // write 
        *it4 = *it4 + 10;

        // read
        cout << *it4 << " ";

        // forward movement
        it4++;
    }
    cout << endl;

    //backward movement

    it4 = v2.end() - 1;
    while (it4 != v2.begin() - 1)
    {
        cout << *it4 << " ";
        it4--;
    }
    cout << endl;

    // Random access iterator
    vector<int> v3 = {10, 20, 30, 40, 50};

    // traverse the vector using a random access iterator
    vector<int>::iterator it5 = v3.begin();
    cout << "Random access iterator: " << endl;
    cout << "Element at index 2: " << *(it5 + 2) << endl; // Accessing element at index 2
    cout << "Element at index 4: " << *(it5 + 4) << endl; // Accessing element at index 4
    cout << "Element at index 0: " << *(it5 + 0) << endl; // Accessing element at index 0
    cout << "Element at index 1: " << *(it5 + 1) << endl; // Accessing element at index 1



    return 0;
}