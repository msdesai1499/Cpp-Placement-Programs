#include <bits/stdc++.h>
using namespace std;
int dectohex(int n)
{
	int arr[32];
	int rem, i = 0;
	while (n != 0)
	{
		rem = n % 16;
		arr[i] = rem;
		i++;
		n = n / 16;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		if (arr[j] >= 0 && arr[j] <= 9)
		{
			cout << arr[j];
		}
		else if (arr[j] >= 10 && arr[j] <= 15)
		{
			cout << char('A' - 10 + arr[j]);
		}
	}
}
int main()
{
	int n;
	cin >> n;

	dectohex(n);
	return 0;
}