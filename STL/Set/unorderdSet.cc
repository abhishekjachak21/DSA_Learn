#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){

   unordered_set<int>unSet={4,5,8,1,2,4,5,5,5,7};

   for(auto i:unSet)
    cout<<i<<" ";
   cout<<endl; 

   unSet.insert(3);
   unSet.insert(3);
   unSet.insert(2);   //so i think values insertes are like FIFO
   unSet.insert(10);   //new values at begin

   for(auto i:unSet)
    cout<<i<<" ";
   cout<<endl; 

   unSet.erase(5);

   for(auto i:unSet)
    cout<<i<<" ";
   cout<<endl; 






    return 0;
}