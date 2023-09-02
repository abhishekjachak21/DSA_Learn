#include<iostream>
using namespace std;

//Rotate Array by k


///----------------------------------------------------------
int main(){
int x = 12;  // binary: 1100
int y = 15;  // binary: 1111
int z = x & y;  // binary: 1100, decimal: 12
cout<<z;
}
// int main(){
//     int n;cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)cin>>a[i];
//     for(int i=0;i<n;i++)cout<<a[i]<<" ";
// int k;
// cout<<"\nk: "; cin>>k;
// k=k%n;
//     for(int i=0;i<n;i++)
//     {
//     //    if(i<k) cout << a[n+i-k] << " ";
//     //    else  cout <<a[i-k]<< " ";
//         if(i<k) cout << a[n-k-1] << " ";
//        else  cout <<a[i-k]<< " ";
//     }
// }
//willSeeLater
///----------------------------------------------------------




/*
///----------------------------------------------------------
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cout<<a[i]<<" ";

    int k;
    cout<<"\nRotate by k: ";cin>>k;
    k=k%n;
    for(int i=k;i<n;i++)cout<<a[i]<<" ";
    for(int i=0;i<k;i++)cout<<a[i]<<" ";
}
///----------------------------------------------------------    */