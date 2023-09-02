#include<iostream>
using namespace std;






///-------------------------------------------------------

// void majEle(int arr[],int n){
//   int count=0,maxCount=0,index=-1;
   
//   for(int i=0;i<n;i++){
//       count =0;                   //you need to write count here as well
//     for(int j=0;j<n;j++)         //nahi to 30min barbaad ho sakte hai
//     { if(arr[i]==arr[j])
//         count++; 
//       }     

//       if(count>maxCount)
//       { maxCount=count;
//         index=i;}
    
//   } 
//    if(maxCount>(n/2))
//    return arr[index];
//    else
//    cout<<"No majority element found!\n";

// }

// int main(){
   
//   int arr[]={2,5,7,2,7,7,7,9,7};
//   int n=sizeof(arr)/sizeof(arr[0]);

//   cout<<"n: "<<n<<endl;

//   majEle(arr,n);


//     return 0;
// }
///-------------------------------------------------------




///-------------------------------------------------------
///GFG Array Majority Element Question 17Dec2022

// int main(){
   
//    int arr[]={2,5,7,2,7,7,7,9,7};
//    int n=sizeof(arr)/sizeof(arr[0]);

//    cout<<"n: "<<n<<endl;
   
//    int count=0,maxCount=0,index=-1;
   
//    for(int i=0;i<n;i++){
//         count =0;                   //you need to write count here as well
//       for(int j=0;j<n;j++)         //nahi to 30min barbaad ho sakte hai
//       {
//         if(arr[i]==arr[j])
//         { count++; }
//       }

//       if(count>maxCount)
//       { maxCount=count;
//         index=i;
//       }
//    }
// //    cout<<"\nuf: "<<maxCount<<" "<<index<<endl;

//    if(maxCount>(n/2))
//    cout<<"Majority Element: "<<arr[index]<<endl;
//    else
//    cout<<"No majority element found!\n";

//     return 0;
// }
///-------------------------------------------------------













//Today7DecCppExam3McodeIsCorrectbro
// int main()
// { 
//     int n;
//     int sum=0,avg;
//     cout<<"\nEnter Size: ";
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++)
//     {  cin>>arr[i];
//     sum += arr[i];
//     avg = sum/n;
//     }
    

//     cout<< "\nYourArray: " ;
//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";

//     cout<<"\nSum: "<<sum;
//     cout<<"\nAvg: "<<avg<<endl ;

//     return 0;
// }

























//    /* C++ Program to find sum of elements
// in a given array */
// //#include <bits/stdc++.h>
// using namespace std;

// // function to return sum of elements
// // in an array of size n
// void sum(int arr[], int n)
// {
// 	int sum = 0; // initialize sum

// 	// Iterate through all elements
// 	// and add them to sum
// 	for (int i = 0; i < n; i++)
// 	sum =sum + arr[i];
//     cout <<"sum= "<< sum;
    
//    //return sum;
// 	//return sum;
// }

// // Driver code
// int main()
// {
// 	int arr[] = {12, 13, 4, 15};
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	cout << "Sum of given array is " << sum(arr, n)<<endl;
// 	return 0;
// }

// // This code is contributed by rathbhupendra









 
    

// //print array using function..will think again
// /*
// void PrintArray(int arr[],int size);

// int main()
// {
//     int a[3]={2,9,1} ;

//     for(int i=0;i<3;i++){
//         cout<<a[i]<<" | ";
//     }
//     cout <<"\n"<< a[1] << endl;
//     PrintArray(a,3);
//   return 0;
// }

// void PrintArray(int arr[],int size)
// {
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" | ";
//     }
// }
// */

