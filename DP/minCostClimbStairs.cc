#include<bits/stdc++.h>
using namespace std;

//top-up approach
// int minCost(vector<int>& cost, int i, vector<int>& dp) {
//     if (i < 0) return 0;
//     if (i == 0 || i == 1) return cost[i];
//     if (dp[i] != -1) return dp[i];

//     dp[i] = cost[i] + min(minCost(cost, i-1, dp), minCost(cost, i-2, dp));
//     return dp[i];
// }

// int minCostClimbingStairs(vector<int>& cost) {
//     int n = cost.size();
//     vector<int> dp(n, -1);
//     return min(minCost(cost, n-1, dp), minCost(cost, n-2, dp));
// }

// int main() {
//     vector<int> cost = {16, 19, 10, 12, 18};
//     cout << "Minimum cost to reach the top: " << minCostClimbingStairs(cost) << endl;
//     return 0;
// }



//recursion
int minimumCost( int n , int cost[]){
	if(n == 0) return cost[0] ;
	if(n == 1) return cost[1] ;

	int top = min( minimumCost(n-1,cost) + cost[n] ,
						minimumCost(n-2, cost)+ cost[n] );

	return top;

}

// Driver Code
int main()
{
	int a[] = { 16, 19, 10, 12, 18 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << minimumCost(n-2, a);
	return 0;
}




//bottom up approach
// int minCostClimbingStairs(vector<int>& cost) {
//     int n = cost.size();
//     if (n == 0) return 0;
//     if (n == 1) return cost[0];

//     vector<int> dp(n);
//     dp[0] = cost[0];
//     dp[1] = cost[1];

//     for (int i = 2; i < n; ++i) {
//         dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
//     }

//     return min(dp[n - 1], dp[n - 2]);
// }

// int main(){
//     vector<int> cost ={10,15,20};

//     cout<<"hi: "<<minCostClimbingStairs(cost)<<endl;
// }

