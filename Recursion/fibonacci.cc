#include<bits/stdc++.h>
using namespace std;

//Note: Striver ke kitne din se videos dekhe jaise movies dekh rha hu, akhir recursion tab hi samaj aaya jab khud se pen paper uthaya!!
// "Jab mai mushkilo se dara, mara toh nahi, lekin jee bhi nhi saka"

//-----------------------------------------------------------------------
//space optimization se //form-5

// int fibonacci(int n){  
//     int prev1 = 1, prev2 = 0;
//     if(n==0) return prev2;
//     if(n==1) return prev1;

//     for(int i=2;i<=n;i++) {
//         int curr = prev1  + prev2;
//         prev2 = prev1;
//         prev1 = curr;
//     }
//     return prev1; 
// }

// int main(){
//     int n;cin>>n;
//     cout<<"Fibonacci no at index "<<n<<" is: "<<fibonacci(n)<<endl;
//     return 0;
// }
//-----------------------------------------------------------------------





//-----------------------------------------------------------------------
//tabulation se //form-4

// int fibonacci(int n, vector<int>&dp){  //& unnecessary copies hone nhi deta
//     dp[0] = 0;
//     dp[1] = 1;
//     for(int i=2;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
//     return dp[n];
// }

// int main(){
//     int n;cin>>n;
//     vector<int>dp(n+1,-1);
//     cout<<"Fibonacci no at index "<<n<<" is: "<<fibonacci(n,dp)<<endl;
//     return 0;
// }
//-----------------------------------------------------------------------



//-----------------------------------------------------------------------
//khud se //memoization se, //form-3
/////vector<int>dp(7,-1);

// int fibonacci(int n, vector<int>&dp){  //& unnecessary copies hone nhi deta
//     if(n==0) return 0;
//     if(n==1) return 1;
//     if(dp[n] != -1) return dp[n];
//     dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
//     return dp[n];
// }

// int main(){
//     int n;cin>>n;
//     vector<int>dp(n+1,-1);
//     cout<<"Fibonacci no at index "<<n<<" is: "<<fibonacci(n,dp)<<endl;
//     return 0;
// }
//-----------------------------------------------------------------------





//-----------------------------------------------------------------------
//khud se //for smaller objects   //form-2
// vector<int>dp(7,-1);

// int fibonacci(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     if(dp[n] != -1) return dp[n];
//     dp[n] = fibonacci(n-1) + fibonacci(n-2);
//     return dp[n];
// }

// int main(){
//     int n;cin>>n;
//     cout<<"Fibonacci no at index "<<n<<" is: "<<fibonacci(n)<<endl;
//     return 0;
// }
//-----------------------------------------------------------------------



//-----------------------------------------------------------------------
//khud se , 25 july 2024, form-1
// int fibonacci(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     int fibo = fibonacci(n-1) + fibonacci(n-2);
//     return fibo;
// }

// int main(){
//     int n;cin>>n;
//     cout<<"Fibonacci no at index "<<n<<" is: "<<fibonacci(n)<<endl;
//     return 0;
// }
//-----------------------------------------------------------------------



//-----------------------------------------------------------------------
////fraz dsa course

int fibonacci(int n, vector<int>&dp){  //& unnecessary copies hone nhi deta
    if(n==0 || n==1) return n;
    if(dp[n] != -1) return dp[n];
    int fib1 = fibonacci(n-1, dp);
    int fib2 = fibonacci(n-2, dp);
    int ans = fib1 + fib2 ;
    dp[n] = ans;
    return dp[n];
}

int main(){
    int n;cin>>n;
    vector<int>dp(n+1,-1);
    cout<<"Fibonacci no at index "<<n<<" is: "<<fibonacci(n,dp)<<endl;
    return 0;
}
//-----------------------------------------------------------------------
