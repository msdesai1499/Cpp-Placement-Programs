#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int i = 0, p = 0, x = 0, r = 0;
		while (i < n)
		{
			x = pow(2, p);
			a[i] = a[i] ^ x;
			if (a[i] == 0)
			{
				i++;
				r++;
				if (r == k)
				{
					p++;
				}
			}
			else
			{
				r = 0;
				p++;
			}
		}
		cout << p;
	}
	return 0;
}