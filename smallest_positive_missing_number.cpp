#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{

		cin >> a[i];
	}

	int temp;
	for (int i = 0; i < n; i++)
	{

		while ((1 <= a[i] <= n) && (a[a[i] - 1] != a[i]))
		{
			temp = a[i];
			a[i] = a[a[i] - 1];
			a[a[i] - 1] = a[i];
		}
	}
	int ans = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != i + 1)
		{
			ans = i + 1;
			break;
		}
	}
	cout << ans;

	return 0;
}