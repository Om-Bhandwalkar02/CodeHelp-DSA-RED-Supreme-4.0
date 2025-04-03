#include "iostream"
#include "map"
#include "unordered_map"

using namespace std;

int main(){

    // creation
    unordered_map<string, string> table;

    // insertion
    table["in"] = "India";
    table.insert(make_pair("en", "England"));

    pair<string, string> p;
    p.first = "br";
    p.second = "Brazil";

    table.insert(p);

    cout << table.size() << endl;

    // table.clear();

    cout << table.size() << endl;

    if (table.empty())  
    {
        cout << "Table is empty........" << endl;
    }
    else{
        cout << "Table is  not empty........" << endl; 
    }


    cout << table.at("in") << endl;
    // cout << table.at("iwsasdn") << endl;

    table.at("in") = "India Updated";
    cout << table.at("in") << endl;
    table["in"] = "India Updated once again!!!!!!!";
    cout << table.at("in") << endl;

    cout << endl;
    cout << endl;
    cout << endl;


    unordered_map<string, string>::iterator it = table.begin();
    while (it != table.end()){
        pair<string, string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }
    cout << endl;

    cout << table.size() << endl;
    // table.erase(table.begin(), table.end());
    cout << table.size() << endl;

    //find method
    if (table.find("in") != table.end())
    {
        cout << "Key Found" << endl;
    }else{
        cout << "Key not Found" << endl;
    }
    

    // count method

    if(table.count("in") == 0){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }



    cout << endl;
    cout << endl;
    cout << endl;


    map<int, string> table2;

    table2.insert(make_pair(3, "Om"));
    table2.insert(make_pair(1, "Love"));
    table2.insert(make_pair(2, "Lakshay"));

    map<int, string>::iterator it2 = table2.begin();

    while (it2 != table2.end())
    {
        pair<int, string> p = *it2;
        cout << p.first << " " << p.second << endl;
        it2++;
    }
    

    return 0;
}