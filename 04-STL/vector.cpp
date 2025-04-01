#include "iostream"
#include "vector"
using namespace std;

int main(){

    // vector<int> marks(5, -1);
    // vector<int> miles(10);
    // vector<int> distance(15, 0);

    // cout << *(marks.begin()) << endl;

    vector<int> marks;
    // marks.reserve(5); // Reserve space for 5 elements

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);   
    marks.push_back(50); 

    cout << marks.size() << endl;

    marks.pop_back();
    
    cout << marks.size() << endl;

    cout << marks.front() << endl;
    cout << marks.back() << endl;

    cout << marks.empty() << endl;
    
    cout << marks[0] << endl;
    marks[0] = 100;
    cout << marks[0] << endl;

    cout << marks.at(0) << endl;
    

    // Accessing an out-of-range index using operator[]
    // This does NOT perform bounds checking and may result in undefined behavior.
    // It might return a garbage value or crash the program.
    // cout << marks[4] << endl; 

    // Accessing an out-of-range index using at()
    // This performs bounds checking and throws an exception if the index is invalid.
    // Since the vector has only 3 elements (indices 0 to 2), this will throw an exception.
    // cout << marks.at(4) << endl; 

    cout << marks.capacity() << endl;
    cout << marks.size() << endl;


    cout << marks.max_size() << endl;

    marks.clear();
    cout << marks.size() << endl;
    cout << marks.capacity() << endl;

    marks.insert(marks.begin(), 200000);
    cout << marks.size() << endl;
    cout << marks.capacity() << endl;

    cout << marks[0] << endl;
    cout << marks.at(0) << endl;
    cout << marks.front() << endl;

    marks.erase(marks.begin(), marks.end());
    cout << marks.size() << endl;
    cout << marks.capacity() << endl;
    
    vector<int> v1;
    vector<int> v2;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(300);
    v2.push_back(400);

    cout << "Before swap" << endl;
    cout << "v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "v2: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    // Swapping the contents of v1 and v2
    v1.swap(v2);
    cout << "After swap" << endl;
    cout << "v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "v2: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;


    //For each loop
    vector<int> v3 = {1, 2, 3, 4, 5};
    cout << "For each loop" << endl;
    for (int i : v3) {
        cout << i << " ";
    }
    cout << endl;

    // traversing a vector using iterator
    cout << "Traversing a vector using iterator" << endl;
    // vector<int>::iterator it;
    vector<int>::iterator it = v3.begin();
    while (it != v3.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    // traversing a vector using reverse iterator
    cout << "Traversing a vector using reverse iterator" << endl;
    vector<int>::reverse_iterator rit;
    for (rit = v3.rbegin(); rit != v3.rend(); rit++) {
        cout << *rit << " ";
    }
    cout << endl;



    //2D vector
    vector<vector<int>> v4(3, vector<int>(4, 0)); // 3 rows and 4 columns initialized to 0
    cout << "2D vector" << endl;

    int totalRows = v4.size();
    int totalCols = v4[0].size();
    cout << "Total Rows: " << totalRows << endl;
    cout << "Total Columns: " << totalCols << endl;

    // Jagged vector
    vector<vector<int>> jaggedVector(5);

    jaggedVector[0] = vector<int>(5);
    jaggedVector[1] = vector<int>(3);
    jaggedVector[2] = vector<int>(4);
    jaggedVector[3] = vector<int>(2);
    jaggedVector[4] = vector<int>(1);

    int totalRowsJagged = jaggedVector.size();
    cout << "Total Rows in Jagged Vector: " << totalRowsJagged << endl;

    for (int i = 0; i < totalRowsJagged; i++) {
        cout << "Row " << i << " size: " << jaggedVector[i].size() << endl;
    }


    return 0; 
}