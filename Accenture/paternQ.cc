#include <iostream>
using namespace std;

int main(){

 int n=7;

 for(int i=0;i<n;i++){

   for(int j=0;j<i;j++)
    cout<<" ";
   

   for(int j=i;j<n;j++)
     cout<<"*";

   cout<<endl;

 }
    return 0;
}