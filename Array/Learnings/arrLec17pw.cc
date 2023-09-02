#include<iostream>
using namespace std;



///-------------------------------------------------------
int main()
{
    int r,c;
    cin>>r>>c;
   int arr[r][c];

   for(int i=0;i<r;i++){
   for(int j=0;j<c;j++){
   cin>>arr[i][j];
   }}
   cout<<endl;

   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
     cout<<arr[i][j]<<" ";
   }cout<<endl;
   }
    cout<<endl;
    
    for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
     cout<<arr[j][i]<<" ";
   }cout<<endl;
   }
    
    return 0;
}
///-------------------------------------------------------



///-------------------------------------------------------
//still is is very much confusing..asOfNow u can move fwd
// int main(){

//     int r1,c1,r2,c2;
//     cin>>r1>>c1;

//     int a[r1][c1];
//     for(int i=0;i<r1;i++){
//     for(int j=0;j<c1;j++){
//     cin>>a[i][j];
//     }}

//     cin>>r2>>c2;

//     int b[r2][c2];
//     for(int i=0;i<r2;i++){
//     for(int j=0;j<c2;j++){
//     cin>>b[i][j];
//     }}
  
//     int c[r1][c2];
//     for(int i=0;i<r1;i++){
//       for(int j=0;j<c2;j++){
//         c[i][j]=0;
//         for(int k=0;k<r1;k++){          //k<r1 or k<c2
//             c[i][j]+=a[i][k]*b[k][j];
//     }}}

//     cout<<endl;
//     for(int i=0;i<r1;i++){
//     for(int j=0;j<c2;j++){
//      cout<<c[i][j]<<" ";
//     }cout<<endl;
//     }
//     return 0;
// }
///-------------------------------------------------------


///-------------------------------------------------------
// int main()
// {
//     int r,c;
//     cin>>r>>c;
//    int arr[r][c];

//    for(int i=0;i<r;i++){
//    for(int j=0;j<c;j++){
//    cin>>arr[i][j];
//    }}
//    cout<<endl;
//    for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//      cout<<arr[i][j]<<" ";
//    }cout<<endl;
//    }
//     return 0;
// }
///-------------------------------------------------------