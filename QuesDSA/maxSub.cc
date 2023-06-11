#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int maximumSubarraySum(vector < int > &arr) {
  int n = arr.size();
  int maxSum =-10000;

  for (int i = 0; i <= n - 1; i++) {
    int currSum = 0;
    for (int j = i; j <= n - 1; j++) {
      currSum += arr[j];
      if (currSum > maxSum) {
        maxSum = currSum;
      }
    }
  }
  return maxSum;
}
int main() {
    // Your code goes here;
    vector<int> a = {2,-4,1,4,-5};
    cout << maximumSubarraySum(a) << endl;
    return 0;
}