#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {

    for (int i = 0; i <= n - 2; i++) {
        int mini = i;
        for (int j = i ; j <= n-1; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        // swap(arr[mini], arr[i]);
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i]=temp;
    }
}

int main() {
    int arr[] = {9, 3, -5, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array => ";
    for(int i:arr) cout<<i<<" ";
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted array => ";
    for(int i:arr) cout<<i<<" ";
    cout << endl << " Thank You! " << endl;

    return 0;
}



// void print(int arr[], int n)
// {
//     for(int i=0;i<n;i++)
//         cout<<arr[i]<<" ";
//     cout<<endl;
// }

// void selectionSort(int arr[], int n )
// {
//     int i,j,min_in;
//     for(i=0;i<n;i++)
//     {
//       min_in = i;
//         for(j=i+1;j<n;j++)
//             if (arr[j] < arr[min_in])
//                 min_in = j;
//        swap(arr[i],arr[min_in]);
//     }
// }

// int main()
// {
//     // int arr[] = {5,4,22,10,1,6,100,89,2};
//     int arr[] = {5,8,4,9,2};
//     int i,j,n,temp;
//     n = sizeof(arr)/sizeof(arr[0]);
//     //n = 9 ; 

//     cout<<"Unsorted Array :";print(arr,n);
//     // sort(arr,arr+n);
//     selectionSort(arr,n);
//     cout<<"Sorted Array :"; print(arr,n);

//     return(0);
// }



















// // function to swap the the position of two elements
// void swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// // function to print an array
// void printArray(int array[], int size) {
//   for (int i = 0; i < size; i++) {
//     cout << array[i] << " ";
//   }
//   cout << endl;
// }

// void selectionSort(int array[], int size) {
//   for (int step = 0; step < size - 1; step++) {
//     int mini = step;
//     for (int i = step + 1; i < size; i++) {

//       // To sort in descending order, change > to < in this line.
//       // Select the minimum element in each loop.
//       if (array[i] < array[mini])
//         mini = i;
//     }

//     // put min at the correct position
//     swap(&array[mini], &array[step]);
//   }
// }

// // driver code
// int main() {
//   int data[] = {20, 12, 10, 15, 2};
//   int size = sizeof(data) / sizeof(data[0]);
//   selectionSort(data, size);
//   cout << "Sorted array in Acsending Order:\n";
//   printArray(data, size);
// }

















// //selection sort 
// int main()
// {
//     int s[5]={5,6,3,2,8},i,n;
    
    
//     for(i=0;i<n-1;i++)
//     int minInd = i;
//        for(j=i+1;j<n;j++){
//          if(s[minInd]>s[i])
//           minInd=s[i];
//          }

//     return 0;
// }