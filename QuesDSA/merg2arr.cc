
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//---------------------------------------------------
//this worked
int main(){
    int ar1[]={2,4,7,8};
    int n1=sizeof(ar1)/sizeof(ar1[0]);

    int ar2[]={1,3,5,6};
    int n2=sizeof(ar2)/sizeof(ar2[0]);
    
    int n3;
    int ar3[n3];
    n3=n1+n2;

    int k=0,i=0,j=0;
    while(i<n1) ar3[k++]=ar1[i++];
    while(j<n2) ar3[k++]=ar2[j++];

    sort(ar3,ar3+n3);

    cout<<"Mergered data: \n";
    for(int s=0;s<n3;s++)
    cout<<ar3[s]<<" ";

    return 0;
}
//---------------------------------------------------


//---------------------------------------------------
// //this doesn't worked cz of int n1 & all
// int main(){
    
//     int n1;
//     int ar1[n1]={2,4,7,8};
//     n1=sizeof(ar1)/sizeof(ar1[0]);
//     int n2;
//     int ar2[n2]={1,3,5,6};
//     n2=sizeof(ar2)/sizeof(ar2[0]);
    
//     int n3;
//     int ar3[n3];
//     n3=n1+n2;
    
//     int k=0,i=0,j=0;
//     while(i<n1) ar3[k++]=ar1[i++];
//     while(j<n2) ar3[k++]=ar2[j++];

//     sort(ar3,ar3+n3);

//     cout<<"Mergered data: \n";
//     for(int s=0;s<n3;s++)
//     cout<<ar3[s]<<" ";

//     return 0;
// }
//---------------------------------------------------




//---------------------------------------------------
// /*
// // C++ program to merge two sorted arrays/
// #include<bits/stdc++.h>
// using namespace std;

// void mergeArrays(int arr1[], int arr2[], int n1,
// 							int n2,int n3, int arr3[])
// {
// 	int i = 0, j = 0, k = 0;
// 	// traverse the arr1 and insert its element in arr3
// 	while(i < n1){
// 	arr3[k++] = arr1[i++];
// 	}
		
// 	// now traverse arr2 and insert in arr3
// 	while(j < n2){
// 	arr3[k++] = arr2[j++];
// 	}
		
// 	// sort the whole array arr3
// 	sort(arr3, arr3+n3);
// }

// // Driver code
// int main()
// {
// 	int arr1[] = {1, 3, 5, 7};
// 	int n1 = sizeof(arr1) / sizeof(arr1[0]);

// 	int arr2[] = {24, 3, 6, 8};
// 	int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
//     int n3=n1+n2;
// 	int arr3[n3];
// 	mergeArrays(arr1, arr2, n1, n2,n3, arr3);

// 	cout << "Array after merging" <<endl;
// 	for (int i=0; i < n3; i++)
// 		cout << arr3[i] << " ";
// cout<<endl;
// 	return 0;
// }
//---------------------------------------------------