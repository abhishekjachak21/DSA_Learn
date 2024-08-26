#include <bits/stdc++.h>
using namespace std; //started array again on 24-08-2024


///=======================================================
//maximum subarray sum
void maxSubSum(int *arr, int n) {  //int arr[] == int *arr, int arr[] pts to 1st ele only
    int ans=0;
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int sum=0;
            for (int k = start; k <= end; k++) {
                sum += arr[k];
                ans = max(sum,ans);
            }
            // cout<<sum<<", ";
        }
        // cout<<endl;
    }
    cout<<ans;
}

void maxSubSum2(int *arr, int n) {  
    int ans=0;
    for (int start = 0; start < n; start++) {
        int sum=0;
        for (int end = start; end < n; end++) {
                sum += arr[end];
                ans = max(sum,ans);
            // cout<<sum<<", ";
        }
        // cout<<endl;
    }
    cout<<ans;
}

void maxSubSum3(int *arr, int n) {   //kadane algo
    int ans=0, sum=0;
    for (int start = 0; start < n; start++) {
                sum += arr[start];
                ans = max(sum,ans);
                if(sum<0) sum=0;
    }
    cout<<ans;
}

int main() {
    // int arr[] = {2,-3,6,-5,4,2};
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Subarray sum is : ";
    maxSubSum3(arr, n); //we pass size always, bcz arr is ptr, its passed by ref

    return 0;
}
///=======================================================

