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
	int b[n];
	int mx = -199999;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > mx)
		{
			b[i] = a[i];
			mx = a[i];
		}
		else
		{
			b[i] = mx;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}