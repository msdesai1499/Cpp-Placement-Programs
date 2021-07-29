#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int b[1001] = {0};
		for (int i = 0; i < n; i++)
		{
			b[a[i]]++;
			if (a[i] == a[i + 1])
			{
				i++;
			}
		}
		int max = 0;
		int ind = 0;
		for (int i = 0; i <= 1000; i++)
		{
			if (max < b[i])
			{
				max = b[i];
				ind = i;
			}
		}
		cout << ind;
	}
}