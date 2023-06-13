#include<iostream>
#include<string>
#include<map>
using namespace std;


int main() {
    map<string, int> m1;

    // Insert key-value pairs into the map
    m1["raam"] = 9089;
    m1["jay"] = 3456;
    m1["Adi"] = 7892;

    // Print the contents of the map
    for (auto i : m1)
        cout << i.first << " " << i.second << endl;
    cout<<endl;

 m1.insert(make_pair("Jay",9067));  //can't overwrites
 m1["jay"]=7890;  // overwrites 

    for (auto i : m1)
        cout << i.first << " " << i.second << endl;
    

    return 0;
}
