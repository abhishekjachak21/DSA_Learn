#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n]; // Return cached result if available

    memo[n] = fib(n - 1, memo) + fib(n - 2, memo); // Calculate and store result
    return memo[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> memo(n + 1, -1); // Initialize memoization array with -1
    int result = fib(n, memo);
    
    cout << "Fibonacci number at position " << n << " is " << result << endl;
    return 0;
}
