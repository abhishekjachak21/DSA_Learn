#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){

   unordered_set<int>love={4,5,8,1,2,4,5,5,5,7};

   for(auto i:love)
    cout<<i<<" ";
   cout<<endl; 

   love.insert(3);
   love.insert(2);   //so i think values insertes are like FIFO
   love.insert(10);   //new values at begin

   for(auto i:love)
    cout<<i<<" ";
   cout<<endl; 

   love.erase(5);

   for(auto i:love)
    cout<<i<<" ";
   cout<<endl; 






    return 0;
}