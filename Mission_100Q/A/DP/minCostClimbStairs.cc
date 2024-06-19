#include<bits/stdc++.h>
using namespace std;


int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    if (n == 0) return 0;
    if (n == 1) return cost[0];

    vector<int> dp(n);
    dp[0] = cost[0];
    dp[1] = cost[1];

    for (int i = 2; i < n; ++i) {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }

    return min(dp[n - 1], dp[n - 2]);
}

int main(){
    vector<int> cost ={10,15,20};

    cout<<"hi: "<<minCostClimbingStairs(cost)<<endl;
}

