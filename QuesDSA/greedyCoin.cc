#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoins(int N, vector<int>& coins) {
    sort(coins.rbegin(), coins.rend()); // Sort coins in descending order
    int count = 0;
    
    for (int coin : coins) {
        while (N >= coin) {
            N -= coin;
            count++;
        }
        if (N == 0) break; // If N becomes 0, break the loop
    }
    
    return count;
}

int main() {
    int N;
    cout << "Enter the amount: ";
    cin >> N;

    int n;
    cout << "Enter the number of coin denominations: ";
    cin >> n;

    vector<int> coins(n);
    cout << "Enter the coin denominations: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int result = minCoins(N, coins);
    cout << "Minimum number of coins required: " << result << endl;

    return 0;
}



/*
You are given an amount N and an array coins representing coin denominations. Your task is to find the minimum number of coins required to make the amount N using the denominations provided. You can assume there are infinite supply of each type of coin.

Example:
Input:

N = 23
coins = [1, 5, 10, 25]
Output:

5 (Explanation: 23 = 10 + 10 + 1 + 1 + 1)
*/