#include<iostream>
#include<vector>
using namespace std ;


// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

#define N 4
#define M 4

// Function to rotate the matrix 90 degree clockwise
void rotate90Clockwise(int arr[N][M])
{
	// printing the matrix on the basis of
	// observations made on indices.
	for (int i = 0; i < N; i++)
	{
		for (int j = M - 1; j >= 0; j--)
			cout << arr[i][j] << " ";
		cout << '\n';
	}
}

// Driver code
int main()
{
	int arr[N][M] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };
	rotate90Clockwise(arr);
	return 0;
}

// This code is contributed by yashbeersingh42









// #define i int

// int main()
// {
//    int a[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
   
// //    for(int i=0;i<3;i++){
// //     for(int j=0;j<4;j++){
// //         cin>>a[i][j]<<" ";
// //     }
// //    }
   
// //    for(int i=0;i<3;i++){
// //     for(int j=0;j<4;j++){
//         cout<<a[3][3]<<" ";
// //     }cout<<endl;
// //    }
//    cout<<endl;

// }

// long fact(long n){
//    int i, fact = 1;
//    for(i = n; i>1; i--)
//       fact *= i;
//    return fact;//factorial of given number
// }
// long nCr(long n, long r){
//    long nume = 1, i;
//    for(i = n; i>r; i--)
//       nume *= i;
//    return long(nume/fact(n-r));//generate result of nCr
// }
// void genPascalsTriangle(long n){
//    for(int i = 0; i<n; i++){
//       for(int j = 0; j<(n-i-1); j++)
//          cout <<setw(3)<< " ";//printing space to show triangular form
//       for(int j = 0; j<(i+1); j++)
//          cout <<setw(3)<< nCr(i, j) <<setw(3)<< " ";
//       cout << endl;
//    }
// }
// main(){
//    int n;
//    cout << "Enter Number of lines: "; cin >> n;
//    genPascalsTriangle(n);
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
//    for(int i=0;i<vec.size();i++){
//     cout<<vec[i];
//   }

// //   sortSqArr(vec);

//    return 0;
// }


// pair<long long, long long> getMinMax(long long a[], int n) {
//     long long int maxe = 0;
//      long long int mine= 1000000000001 ;
    
//     for(int i=0;i<n;i++)
//     {
//         if(maxe<a[i]) {maxe=a[i];}
//         if(mine>a[i]) {mine=a[i];}
//     }
    
//     pair<long long, long long > ans;
//     ans.first=mine;
//     ans.second=maxe;
    
//     return ans;
    
// }


// pair<long long, long long> getMinMax(long long a[], int n) {
//     sort(a,a+n);
//     int min=a[0];
//     int max=a[n-1];
//     pair<int,int> p(min,max);
//     return p;
// }

// class Solution{
//     public:
//     vector<int> sortArr(vector<int>arr, int n){
//     //complete the function here
    
//     // for(int i=0; i<n-1; i++)
//     // {
//     //     int mid =i;
//     //     int j;
//     //     for(int j=i+1; j<n; j++)
//     //     {
//     //         if(arr[j]<arr[mid])
//     //         {
//     //       mid=j;
//     //         }
      
//     //     }
//     //     swap(arr[mid],arr[i]);
        
//     // }
//     // return arr;
    
    
//      sort(arr.begin(),arr.end());
//        return arr;
//     }
// };

// C++ program for implementation of
// selection sort
// #include <bits/stdc++.h>
// using namespace std;

// //Swap function
// void swap(int *xp, int *yp)
// {
// 	int temp = *xp;
// 	*xp = *yp;
// 	*yp = temp;
// }

// void selectionSort(int arr[], int n)
// {
// 	int i, j, min_idx;

// 	// One by one move boundary of
// 	// unsorted subarray
// 	for (i = 0; i < n-1; i++)
// 	{
	
// 		// Find the minimum element in
// 		// unsorted array
// 		min_idx = i;
// 		for (j = i+1; j < n; j++)
// 		if (arr[j] < arr[min_idx])
// 			min_idx = j;

// 		// Swap the found minimum element
// 		// with the first element
// 		if(min_idx!=i)
// 			swap(&arr[min_idx], &arr[i]);
// 	}
// }

// //Function to print an array
// void printArray(int arr[], int size)
// {
// 	int i;
// 	for (i=0; i < size; i++)
// 		cout << arr[i] << " ";
// 	cout << endl;
// }

// // Driver program to test above functions
// int main()
// {
// 	int arr[] = {64, 25, 12, 22, 11};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	selectionSort(arr, n);
// 	cout << "Sorted array: \n";
// 	printArray(arr, n);
// 	return 0;
// }
// This is code is contributed by rathbhupendra

// for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";
//     cout<<endl;



