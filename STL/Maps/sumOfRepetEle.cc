// C++ program find sum of elements that
// appear k times.
#include <bits/stdc++.h>
using namespace std;

// Returns sum of k appearing elements.
int sumKRepeating(int arr[], int n, int k)
{
int sum = 0;

// Count frequencies of all items
unordered_map<int, int> mp;
for (int i=0; i<n; i++)
	mp[arr[i]]++;     //////most imp step

// Sum items with frequencies equal to k.
for (auto x : mp)
	if (x.second == k)
		sum += x.first;
return sum;
}

// Driver code
int main()
{
	int arr[] = { 9, 9, 10, 11, 8, 8, 9, 8 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 0;
	cout << sumKRepeating(arr, n, k);
	return 0;
}
