//DP started today, 25july, from fraz
//leetcode 70. Climbing stairs


#include <bits/stdc++.h>
using namespace std;

///-------------------------------------------------------
//recursive way, without memoization

int climbStairs(int n) {
    if (n == 1) return 1; // Base case: 1 way to climb 1 step
    if (n == 2) return 2; // Base case: 2 ways to climb 2 steps (1+1 or 2)
    
    return climbStairs(n - 1) + climbStairs(n - 2); // Recurrence relation
}

int main(){
 int n; cin >> n ;
 int ans = climbStairs(n);
 cout << ans;
}
///-------------------------------------------------------



///-------------------------------------------------------
//memoization
// int help(int s, int n, vector<int>& dp) {
//     if (s == n) return 1;
//     if (s > n) return 0;
//     if (dp[s] != -1) return dp[s];
//     dp[s] = help(s + 1, n, dp) + help(s + 2, n, dp);
//     return dp[s];
// }

// int climbStairs(int n) {
//     vector<int> dp(n + 1, -1);  // Initialize dp array within climbStairs
//     return help(0, n, dp);
// }

// int main(){
//  int n; cin >> n ;
//  int ans = climbStairs(n);
//  cout << ans;
// }
///-------------------------------------------------------




///-------------------------------------------------------
//tabulation
// int climbStairs(int n) {
//     if (n == 1) return 1; // Special case for n = 1

//     vector<int> dp(n + 1);
//     dp[0] = 1;  // There's 1 way to stay at the ground
//     dp[1] = 1;  // There's 1 way to reach the first step

// for (int i = 2; i <= n; ++i) {
//     dp[i] = dp[i - 1] + dp[i - 2];
//  }

//     return dp[n];
// }


//     int main(){
//     int n; cin >> n ;
//     int ans = climbStairs(n);
//     cout << ans;
//     }

///-------------------------------------------------------







///-------------------------------------------------------
//spcae optimization

// int climbStairs(int n) {
//     if (n == 1) return 1; // Special case for n = 1
    
//     int prev1 = 1, prev2 = 1;
    
//     for (int i = 2; i <= n; ++i) {
//         int current = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = current;
//     }
    
//     return prev1;
// }

//  int main(){
//     int n; cin >> n ;
//     int ans = climbStairs(n);
//     cout << ans;
// }
///-------------------------------------------------------
