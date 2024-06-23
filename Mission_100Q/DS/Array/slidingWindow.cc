#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int>& nums, int k) {
    int n = nums.size();
    int maxSum = 0, windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }
    maxSum = windowSum;
    for (int i = k; i < n; i++) {
        windowSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main(){
    
    vector<int> nums = {2,45,6,34,91,12};
    cout<<" Max Sum subarray: "<< maxSumSubarray(nums, 3)<<endl;

    return 0;
}
