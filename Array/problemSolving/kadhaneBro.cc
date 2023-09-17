#include <iostream>
using namespace std;

int main() {
    int arr[] = {-1,-2,-3,-4,-5};
    int n = sizeof(arr) / sizeof(arr[0]);

    long long maxEndingHere = arr[0];
    long long maxSoFar = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxEndingHere + arr[i]) 
            maxEndingHere = arr[i];
        else 
            maxEndingHere += arr[i];


        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
    }

    cout << "Max subarray sum is: " << maxSoFar << endl;

    return 0;
}
