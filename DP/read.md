Certainly! Here are ten widely and frequently asked dynamic programming questions that are commonly seen in coding interviews:

1. Fibonacci Sequence:
   - Problem: Calculate the n-th Fibonacci number.
   - Variants: Space optimization using two variables.

2. Climbing Stairs:
   - Problem: You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

3. Coin Change:
   - Problem: Given an array of coins of different denominations and a total amount of money, write a function to compute the number of combinations that make up that amount.
   - Variants: Minimum number of coins to make up the amount.

4. Longest Increasing Subsequence:
   - Problem: Given an unsorted array of integers, find the length of the longest increasing subsequence.

5. 0/1 Knapsack Problem:
   - Problem: Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack.

6. Edit Distance:
   - Problem: Given two strings word1 and word2, find the minimum number of operations required to convert word1 to word2. You have the following 3 operations permitted on a word: Insert a character, Delete a character, Replace a character.

7. Longest Common Subsequence:
   - Problem: Given two strings text1 and text2, return the length of their longest common subsequence.

8. Matrix Chain Multiplication:
   - Problem: Given a sequence of matrices, find the most efficient way to multiply these matrices together. The problem is not actually to perform the multiplications but merely to decide in which order to perform the multiplications.

9. Partition Equal Subset Sum:
   - Problem: Given a non-empty array containing only positive integers, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

10. Maximum Subarray:
    - Problem: Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
    - Variants: Print the subarray.






















### Example Problem with Solution

Let's look at the Climbing Stairs problem in detail:

#### Problem
You are climbing a staircase. It takes `n` steps to reach the top. Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

#### Solution
This problem can be solved using dynamic programming. Let `dp[i]` represent the number of ways to reach the i-th step. The recurrence relation is:
\[
dp[i] = dp[i-1] + dp[i-2]
\]
This is because you can reach the i-th step either from the (i-1)-th step or the (i-2)-th step.

Here's the implementation in C++:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n) {
    if (n <= 1) return 1;

    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    cout << "Number of ways to reach the top: " << climbStairs(n) << endl;
    return 0;
}
```

### Explanation

1. Base Cases:
   - If there are no steps, there's 1 way to stay at the ground (dp[0] = 1).
   - If there's 1 step, there's only 1 way to climb it (dp[1] = 1).

2. DP Array Initialization:
   - Create a vector `dp` of size `n+1` initialized to 0. This will store the number of ways to reach each step.

3. Fill the DP Array:
   - Use the recurrence relation to fill in the rest of the `dp` array:
     \[
     dp[i] = dp[i-1] + dp[i-2]
     \]

4. Return the Result:
   - Return the value of `dp[n]`, which will be the number of ways to reach the n-th step.