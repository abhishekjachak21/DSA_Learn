#include<iostream>
using namespace std ;


///clockwise rotation of an array

// int main(){
    
//     int ar[]={1,2,3,4,5};
//     int n=5 ,k;
    
//     cout<<"Rotate by: ";cin>>k;
//     cout<<k<<" steps"<<endl ;
//     k=k%n;

//     int ff[5];
//     int j=0;

  
//     for(int i=k;i<n;i++)
//        ff[j++]=ar[i];

//     for(int i=0;i<=k;i++)
//        ff[j++]=ar[i];

//     for(int i=0;i<n;i++)
//        cout<<ff[i];
//        cout<<endl;

//     return 0;
// }








//---------------------
///rotate n size array by k steps(anticloc)
// int main(){
    
//     int ar[]={1,2,3,4,5};
//     int n=5 ,k;
    
//     cout<<"Rotate by: ";cin>>k;
//     cout<<k<<" steps"<<endl ;
//     k=k%n;

//     int ff[5];
//     int j=0;

//     for(int i=n-k;i<n;i++)
//        ff[j++]=ar[i];

//     for(int i=0;i<=k;i++)
//        ff[j++]=ar[i];

//     for(int i=0;i<n;i++)
//        cout<<ff[i];

//        cout<<endl;

//     return 0;
// }

 


//----------------------------------------------















  

//---------------------------
//2nd Take On find seclarge ele
// int main()
// {
//     int a[]={1,2,3,4,5,6,6,6,6,6,7,7};
//     int size=sizeof(a)/sizeof(a[0]);


// int max=INT16_MIN,smax=INT16_MIN;
//   for(int i=0;i<size;i++){
//     if(a[i]>max){
//         max=a[i];
//     }
//   }

// for(int i=0;i<size;i++){
//     if(a[i]>smax && a[i]!=max){
//         smax=a[i];
//     }
// }
//     cout<<"1st Largest: "<<max<<endl;
//     cout<<"2nd Largest: "<<smax<<endl;
//     return 0;
// }
//-------------------------------




///-----------------------------------
///2nd Largest elements
// int large(int a[],int size){

//   int max=INT32_MIN,maxInd=0;
//   for(int i=0;i<size;i++){
//     if(a[i]>max){
//         max=a[i];
//         maxInd=i;
//     }
//   }
//    return maxInd;
// }

// int main()
// {
//     int a[]={2,3,67,4,19,0,2};
//     int size=sizeof(a)/sizeof(a[0]);

//     int F_larInd=large(a,size);
//     cout<<"1st Largest: "<<a[F_larInd]<<endl;
//     a[F_larInd]=-1; //bhai var ki starting no se 
//                     //mat karo..30min waste jayenge
//      int Sec_larInd=large(a,size);
//     cout<<"2nd Largest: "<<a[Sec_larInd]<<endl;
//     return 0;
// }
//---------------------------------------