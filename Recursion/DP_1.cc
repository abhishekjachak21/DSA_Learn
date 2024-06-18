#include<bits/stdc++.h>
using namespace std;
// Function to compute Fibonacci using memoization
int fib(int n, vector<int>& memo) {
    if (n <= 1)   return n;
    
    if (memo[n] != -1)  return memo[n];
    
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];
}

int main() {
    int n = 6; // Example: find the 10th Fibonacci number
    vector<int> memo(n + 1, -1); // Initialize memoization table with -1
    cout << "Fib(" << n << ") = " << fib(n, memo) << endl;
    return 0;
}
