#include<iostream>
using namespace std;

int main(){

   int n;
   cin >> n;
   int a[n];

   for(int i=0;i<n-1;i++) cin >>a[i];
   int m=0,k=0;
   cout<<"Arr: \n";
   for(int i=0;i<n-1;i++) cout<<a[i]<<" ";

   for(int i=1;i<=n;i++){
      for(int j=0;j<=n-2;j++){
        if(i!=a[j])  {m=i;k=a[j-1];}
      }
   }
   cout<<"Miss No: "<<m<<" "<<k<<endl;


}