// C++ program to print all numbers between 1
// to N in reverse order

#include <bits/stdc++.h>
using namespace std;

// Recursive function to print from N to 1
void PrintReverseOrder(int N)
{
	// if N is less than 1
	// then return void function
	if (N <= 0) {
		return;
	}
	else {
		cout << N << " ";

		// recursive call of the function
		PrintReverseOrder(N - 1);
	}
}

// Driven Code
int main()
{
	int N = 11;

	PrintReverseOrder(N);

	return 0;
}