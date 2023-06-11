#include<iostream>
// #include<bits/stdc++.h>
#include<set>
using namespace std;


int main(){

   //ascending(default)order
    set<int>s={8,3,5};

   cout<<"Set: ";
    for(auto r : s){
        cout<< r << " " ;
    }cout<<endl;

    //find() function

    if(s.find(4) != s.end())
     cout<< "value present"<<endl;
     else 
     cout<< "value not present"<<endl;


 set<int> mySet = {10, 20, 30, 40, 50};

    // Using lower_bound
    auto it1 = mySet.lower_bound(30);
    if (it1 != mySet.end()) {
        cout << "Lower bound of 30: " << *it1 << endl;
    }

    // Using upper_bound
    auto it2 = mySet.upper_bound(30);
    if (it2 != mySet.end()) {
        cout << "Upper bound of 30: " << *it2 << endl;
    }
  





}