// Bubble sort in C++
//by striver, on 4july2024, last revision


#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int arr[], int n) {
   for(int i=n-1; i>=0; i--){
    for(int j=0;j<=i-1;j++){
      if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
    }
   }
}

int main() {
    int arr[] = {9, 13, -5, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array => ";
    for(int i:arr) cout<<i<<" ";
    cout << endl;

    bubbleSort (arr, n);

    cout << "Sorted array => ";
    for(int i:arr) cout<<i<<" ";
    cout << endl << " Thank You! " << endl;

    return 0;
}