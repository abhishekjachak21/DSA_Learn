#include<iostream>
#include <bits/stdc++.h>
using namespace std ;



///-----------------------------------------------
////lastSumlec16 but haveAconscious Learning ahead,better
int main()
{
  int n;
  cout<<"Entersize: ";cin>>n;
  cout<<"EnterArray: ";
   
  vector<int> v(n+1,0);
  for(int i=1;i<=n;i++){
   cin>>v[i];
   v[i]=v[i]+v[i-1];
  }
   int l,r,q,ans;
   cout<<"Enter Queries: ";cin>>q;
   cout<<endl;

  while(q--){
   cout<<"Enter l & r: ";

   cin>>l>>r;
   
  ans=v[r]-v[l-1];
  cout<<"YourAns: "<<ans<<endl;

   return 0;
  }
}

///-----------------------------------------------




///-----------------------------------------------
////prefi=suffix sum i.e a0... and i+1...n-1 lec16pw
// int main()
// {
//    int a[]={1,3,5,4,6};
//    int n=sizeof(a)/sizeof(a[0]);

//    int ps=0,ts=0,ss=0;
   
//    for(int i=0;i<n;i++)  ts+=a[i];

//    for(int i=0;i<n;i++)
//    {ps+=a[i];
//     ss=ts-ps;
//     cout<<endl<<ts<<" "<<ps<<" "<<ss<<" "<<i<<endl;
//     if(ps==ss)
//     {cout<<"\ntrue "<<i<<"\n"<<endl;
//     break; }
//    }
//     return 0;
// }

///-----------------------------------------------


///-----------------------------------------------
//28dec2022-lec16pw-prefix sum
// int main(){
    
//     int a[]={5,4,3,6,2};
//     int n=sizeof(a)/sizeof(a[0]);
//     // int m;

//     // cout<<"Enter Index: "<<endl;cin>>m;
//     for(int i=1;i<n;i++)    a[i]=a[i]+a[i-1];
//     for(int i=0;i<n;i++)   cout<<a[i]<<" ";
//     cout<<endl;

//     return 0;
// }
///----------------------------------------------