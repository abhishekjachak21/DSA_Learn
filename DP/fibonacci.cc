#include<bits/stdc++.h>  //source: 102 lec babbar(18june2024)
using namespace std;






//-----------------------------------------------------------------------
///DP se problem solve kiya hu
// int fib(int n, vector<int> dp) {
//     if (n <= 1) return n;
//     if (dp[n] != -1) return dp[n];
//     dp[n] = fib(n-1, dp) + fib(n-2, dp);
//     return dp[n];
// }

// int main() {
//     int n; cin>>n; // example input
//     vector<int> dp(n + 1, -1);
//     cout << "Fibonacci number: " << fib(n, dp) << endl;
//     return 0;
// }
//-----------------------------------------------------------------------




//-----------------------------------------------------------------------
///Recursion se solve kiya hu
// int fib(int n) {
//     if (n <= 1) return n; // Base case: fib(0) = 0, fib(1) = 1
//     return fib(n - 1) + fib(n - 2); // Recursive case
// }

// int main() {
//     int n; 
//     cin >> n; // Example input
//     cout << "Fibonacci number: " << fib(n) << endl;
//     return 0;
// }
//-----------------------------------------------------------------------




/* bahut bada lagr soln so upar short mei likh rha, without comments
int fib(int n, vector<int> &dp){
   
   if(n<=1) return n;

//already calculated h toh return karo
   if(dp[n] != -1) return dp[n];

//already ni h toh karo calculate, aur ab dp[n] mei store karo
   dp[n] = fib(n-1, dp) + fib(n-2, dp);

   return dp[n];

}


int main(){

    int n; cin>>n;
    
    // Initialize dp array with -1 , aise bhi kar sakte
    vector<int>dp(n+1,-1);
    
    // for (int i = 0; i < n; i++)
    // {
    //     dp[i] = -1;
    // }

     // Calculate and print the n-th Fibonacci number
    cout << "Fibonacci number: " << fib(n, dp) << endl;


    return 0;
}
*/