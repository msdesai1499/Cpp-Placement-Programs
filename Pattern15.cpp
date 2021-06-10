
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			cout << "*";
		}
		cout << "*";

		for (j = 1; j <= (2 * i) - 1; j++)
		{
			cout << " ";
		}
		if (i != 1)
		{
			cout << "*";
		}
		for (j = 1; j <= n - i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
	for (i = n; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
			cout << "*";
		}

		cout << "*";

		for (j = 1; j <= (2 * i) - 1; j++)
		{
			cout << " ";
		}
		if (i != 1)
		{
			cout << "*";
		}
		for (j = 1; j <= n - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}