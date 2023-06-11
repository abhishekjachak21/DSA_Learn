#include<iostream>
using namespace std; 



int main(){


    int i,n,sum=0;
cout << "Enter Size of an Array: "<<endl ;
cin >>n;
int arr[n];
cout << "Enter elements for Array: " << endl ;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
//accept( i, n, sum,arr[n]);
//     int i,n,sum=0;
// cout << "Enter Size of an Array: "<<endl ;
// cin >>n;
// int arr[n];
// cout << "Enter elements for Array: " << endl ;
// for(i=0;i<n;i++)
// {
//     cin>>arr[i];
// }
//accept(void);
    max = arr[0];
    min = arr[0];
 

    for(i=1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
 
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<"Maximum element is: "<<max<<endl;
    cout<<"Minimum element is: "<<min<<endl;
// int zeroth=arr[0];
// int uff;
// for(i=0;i<n;i++)
//    if(zeroth>arr[i])
//      uff=arr[i];
   
// int truth;
// for(i=0;i<n;i++)
//    if(uff<arr[i])
//      truth=arr[i];


//  cout << "\n1st Minimum Value: "<< uff << endl ;
//  cout << "\n2nd Minimum Value: "<< truth << endl ;


return 0;
}

// void accept(int i,int n,int sum,int arr[n])
// {
//     int i,n,sum=0;
// cout << "Enter Size of an Array: "<<endl ;
// cin >>n;
// int arr[n];
// cout << "Enter elements for Array: " << endl ;
// for(i=0;i<n;i++)
// {
//     cin>>arr[i];
// }
// // cout<<"\nYou entered this Array: \n" ;
// // for(i=0;i<n;i++)
// // {
// //     cout<<arr[i];
// //     cout << endl ;
// // }

//  }