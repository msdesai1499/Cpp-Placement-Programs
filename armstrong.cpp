#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m = n, rem, sum = 0;
	while (n != 0)
	{
		rem = n % 10;
		sum = sum + (rem * rem * rem);
		n = n / 10;
	}
	if (sum == m)
	{
		cout << "Armstrong Number";
	}
	else
	{
		cout << "Not an Armstrong Number";
	}
	return 0;
}