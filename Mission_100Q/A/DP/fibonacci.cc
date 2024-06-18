#include<bits/stdc++.h>  //source: 102 lec babbar(18june2024)
using namespace std;


int fib(int n, vector<int> &dp){
   
   if(n<=1) return n;

   if(dp[n] != -1) return dp[n];

   dp[n] = fib(n-1, dp) + fib(n-2, dp);

   return dp[n];

}


int main(){

    int n; cin>>n;
    
    vector<int>dp(n+1,-1);
    
    // for (int i = 0; i < n; i++)
    // {
        
    // }
    cout<<"fb: "<<fib(n,dp)<<endl;

    return 0;
}