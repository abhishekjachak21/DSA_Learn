#include<iostream>
using namespace std;


void insertionSort(int arr[], int n){

   for(int i=0;i<=n-1;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp= arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
   }
}




int main() {
    int arr[] = {9, 13, -5, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array => ";
    for(int i:arr) cout<<i<<" ";
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array => ";
    for(int i:arr) cout<<i<<" ";
    cout << endl << " Thank You! " << endl;

    return 0;
}