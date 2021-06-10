#include <bits/stdc++.h>
using namespace std;
int dectobin(int n)
{
	int arr[32];
	int rem, i = 0;
	while (n != 0)
	{
		rem = n % 2; //for octal use 8 instead of 2
		arr[i] = rem;
		i++;
		n = n / 2; //for octal use 8 instead of 2
	}

	for (int j = i - 1; j >= 0; j--)
	{
		cout << arr[j];
	}
}
int main()
{
	int n;
	cin >> n;

	dectobin(n);
	return 0;
}