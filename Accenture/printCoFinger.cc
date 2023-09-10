// CPP Program to Count numbers on fingers
#include <iostream>
using namespace std;


// function to count fingers
int countFingers(int n)
{
// calculate the number of full hands
int full_hands = n / 10;

// calculate the number of fingers used in full hands
int full_fingers = full_hands * 10;

// calculate the number of remaining fingers
int remaining_fingers = n % 10;

// calculate the total number of fingers used
int total_fingers = full_fingers + remaining_fingers;

// return the total number of fingers used
return total_fingers;
}

// Driver code
int main()
{
int n = 10;
int total_fingers = countFingers(n);
cout << "Total number of fingers used to count " << n
	<< " is " << total_fingers << endl;

return 0;
}

// This code is contributed by user_dtewbxkn77n




/* int count_num_finger(int n)
{
	int r = n % 8;
	if (r == 0)
		return 2;
	if (r < 5)
		return r;
	else
		return 10 - r;
}

// Driver code
int main()
{
	int n;
	n = 10;
	cout << count_num_finger(n);

	return 0;
} */
