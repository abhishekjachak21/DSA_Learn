#include<iostream>
// #include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){

   //ascending(default)order
    set<int>s={8,3,5};

   cout<<"ascending Order Set: ";
    for(auto r : s){
        cout<< r << " " ;
    }cout<<endl;


   //descending order
    set<int, greater<int> >s1={8,3,7,7,7,5};

    cout<<"Descending Order Set: ";
    for(auto r : s1)
        cout<< r << " " ;
    cout<<endl;


    //insert elements TC=O(logn)
    set<int>s2;

    s2.insert(5);
    s2.insert(4);
    s2.insert(3);
    s2.insert(2);
    s2.insert(5);
    s2.insert(1);

cout<<"Inserted elements: ";
   for(auto itr=s2.begin();itr!=s2.end();itr++){
    cout<< *itr <<" ";
   }cout<<endl;

    //deleting elements from set
    // 1. direct way
    //2. position
    //3. delete range


  // 1. direct way
set<int>d1={1,2,3,4,5};
    d1.erase(4);
    for(auto r : d1){
        cout<< r << " " ;
    }cout<<endl;

 //2. position
set<int>d2={1,2,3,4,5,6,7};   

auto itr = d2.begin();
advance(itr,5);

d2.erase(itr);
for(auto r : d2){
        cout<< r << " " ;
    }cout<<endl;



//3. delete range
set<int>d3={1,2,3,4,5,6,7,8,9};   

auto st = d3.begin();
advance(st,2);
// st++;

auto e= d3.begin();
advance(e,6);

d3.erase(st,e);
for(auto r : d3){
        cout<< r << " " ;
    }cout<<endl;
}    


