// Simple C++ program to
// find sum of all divisors
// of a natural number
#include<bits/stdc++.h>
using namespace std;

// Function to calculate sum of all
//divisors of a given number
int divSum(int n)
{
	if(n == 1)
	return 1;

	// Sum of divisors
	int result = 0;

	// find all divisors which divides 'num'
	for (int i = 2; i <= sqrt(n); i++)
	{
		// if 'i' is divisor of 'n'
		if (n % i == 0)
		{
			// if both divisors are same
			// then add it once else add
			// both
			if (i == (n / i))
				result += i;
			else
				result += (i + n/i);
		}
	}

	// Add 1 and n to result as above loop
	// considers proper divisors greater
	// than 1.
	return (result + n + 1);
}

// Driver program to run the case
int main()
{
	int n = 30;
	cout << divSum(n);
	return 0;
}
