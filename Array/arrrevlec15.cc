
#include<iostream>
#include <bits/stdc++.h>
using namespace std ;


///-----------------------------------------------
///lec15 sortedSquaredArray....{}thik se use karo30Minwastage
///confusing if you dont solveby urself

// void soSqArr(vector<int> &vec){

//   vector<int>ans;
//   int x=0;
//   int y=vec.size()-1;

//   while(x<=y){
//    if(abs(vec[x]<abs(vec[y]))){
//     ans.push_back(vec[y]*vec[y]);
//     y--;
//    }
//    else {
//     ans.push_back(vec[x]*vec[x]);
//     x++;
//   }
// }
// // reverse(ans.begin(),ans.end());
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//   }cout<<endl;
// }

// int main()
// {
//    int n;cin>>n;
//    vector<int>vec;

//    for(int i=0;i<n;i++)
//    {
//    int ele;
//    cin>>ele;
//    vec.push_back(ele);
//    }
//   //  for(int i=0;i<vec.size();i++){
//   //   cout<<vec[i];
//   // }

//    soSqArr(vec);

//    return 0;
// }
// /-----------------------------------------------
// /-----------------------------------------------



////-----------------------------------------------
//usingArray ..sq of ele in arr sorted also for -ve terms
// #include <bits/stdc++.h>
// int main(){

//     // int a[]={1,2,3,4,5};
//     // int a[]={-10,-3,2,4,5};
//     // int n=sizeof(a)/sizeof(a[0]);

//     int n;
//     cout<<"Size: ";cin>>n;
//     int a[n];

//     for(int i=0;i<n;i++)
//     cin>>a[i];

    
//     for(int i=0;i<n;i++){
//         a[i]=a[i]*a[i];
//         // cout<<a[i]<<" ";
//     }
//     // cout<<endl;
//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
//     }cout<<endl;
//     return 0;
// }
///-----------------------------------------------


///-----------------------------------------------
// // evenInt at begin and odd at the end
// #include <bits/stdc++.h>
// int main()
// {
// //    int a[]={8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8,9,10};
//    int a[]={1,3,5,7,9,2,4,6,8,9,7,5,3,1};
//    int i,j;
//    int n=sizeof(a)/sizeof(a[0]);
//    int x=0;
//    int y=n-1;

//    while(x<y){
//     if(a[x]%2==0 && a[y]%2!=0)
// 	{  x++; y--;}

//     else if(a[x]%2==0 && a[y]%2==0) 
// 	{x++;}
	
//     else if(a[x]%2!=0 && a[y]%2!=0) 
// 	{y--;}

//     else if(a[x]%2!=0 && a[y]%2==0){
// 	int temp = a[x];
//     a[x] = a[y];
//     a[y] = temp;
// 	x++;y--;
// 	}

//    }
//     for(int i=0;i<n;i++){
// 	cout<<a[i]<<" ";
// 	} cout<<endl;
    
// 	sort(a,a+n);
    
// 	for(int i=0;i<n;i++){
// 	cout<<a[i]<<" ";
// 	} cout<<endl;

// 	return 0;
// }
///-----------------------------------------------








///-------------------------------------------------------
// int main()
// {
 
//    int arr1[]={1,4,9,21,34,67,89},arr2[]={2,10,25,85};
//    int m=7,n=4;

//   //  int arr[] = arr1+arr2;
//   //  for(int i=0;i<n;i++)
//   //  cout<<arr[i]<<endl;
//   int res[m+n];
//   int i=0,j=0,k=0;

//   while(i<m and j<n){
//   if(arr1[i]<arr2[j])
//    {res[k]=arr1[i];
//     i++;k++;}
//   else{
//     res[k]=arr2[j];
//     j++;k++;
//   }}

//   // while(i<m){
//   //   res[k]=arr1[i];
//   //   i++;k++;
//   // }

// //  while(j<n){
// //   res[k]=arr2[j];
// //   j++;k++;
// //  }

// for(int k=0;k<(m+n);k++)
// cout<<res[k]<<endl;

//   return 0;
// }
///-------------------------------------------------------


// ///-----------------------------------------------
// //Lec15 and TwoPointers(Q1)
// int main(){

//    vector<int> v={1,1,0,0,0,0};
//    int countZ=0,countO=0;
//    for(int i=0;i<v.size();i++)
//    {
//     if(v[i]==0) countZ++;
// 	else countO++;
//    }

//    for(int i=0;i<countZ;i++)
//    {  
// 	v[i]=0;
//     cout<<v[i]<<" ";
//    } 

//    for(int i=countZ;i<v.size();i++)
//    {
// 	v[i]=1;  
//     cout<<v[i]<<" ";
//    } cout<<endl;
//    return 0;
// }







///-----------------------------------------------
//Lec15 and TwoPointers(Q1)
// int main(){
//    vector<int> v={1,1,1,0,0,0,0};

//    int lftp=0;
//    int rgtp=v.size()-1;

//    cout<<v.size()<<endl;

//    while(lftp<rgtp)
//    {
//     if(v[lftp]==1 && v[rgtp]==0 ) {
//       v[lftp++]==0 ;
//       v[rgtp--]==1 ;
//    }

//    cout<<lftp<<" "<<rgtp<<" "<<endl;

//     if(v[lftp]==0)
//     {  lftp++;}

//     if(v[rgtp]==1) 
//     { rgtp--;}

//    }

//    for(int i=0;i<v.size();i++){
//       cout<<v[i]<<" ";
//    }

//    return 0;
// }
///willSee n Solve next Time
///-----------------------------------------------

