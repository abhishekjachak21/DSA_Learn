#include <bits/stdc++.h>
using namespace std;
//TC-> O(nlogn)
//SC-> O(n)


void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {   //left<=right nahi, arr[left]<=arr[right]
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {   //collect remaining elements
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr // 
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];  //this line part is tricky for me,
    } 
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low == high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}


int main() {
    vector<int>arr = {2,8,3,5,12,4,1};
    int n = arr.size();

    cout << "Unsorted array => ";
    for(int i:arr) cout<<i<<" ";
    cout << endl;

    mergeSort(arr, 0, n-1);

    cout << "Sorted array => ";
    for(int i:arr) cout<<i<<" ";
    cout << endl << " Thank You! " << endl;

    return 0;
}