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
	int max = 0, ans = 0;

	if (n == 1)
	{
		cout << "1" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			if (a[i] > a[i + 1] || i == n - 1)
			{
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}