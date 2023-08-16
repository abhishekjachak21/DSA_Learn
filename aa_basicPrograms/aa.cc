#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void getElements1(int arr[], int n) {
    if (n <= 1) {
        cout << "2nd Smallest: -1" << endl;
        cout << "2nd Largest: -1" << endl;
        return;
    }

    int smallest = INT_MAX, largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    int second_smallest = INT_MAX, second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] != smallest)
            second_smallest = min(second_smallest, arr[i]);
        if (arr[i] != largest)
            second_largest = max(second_largest, arr[i]);
    }

    cout << "2nd Smallest: " << ((second_smallest != INT_MAX) ? second_smallest : -1) << endl;
    cout << "2nd Largest: " << ((second_largest != INT_MIN) ? second_largest : -1) << endl;
}
int main(){
    int arr[]={1,2,4,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElements1(arr,n);
    cout<<endl<<endl;

   
    return 0;
}