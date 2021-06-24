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
	const int N = 1e4 + 2;
	int idx[N];

	memset(idx, -1, N);
	int minidx = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (idx[a[i]] == -1)
		{
			idx[a[i]] = i;
		}
		else
		{
			minidx = min(minidx, idx[a[i]]);
		}
	}

	if (minidx == INT_MAX)
	{
		cout << "-1";
	}
	else
	{
		cout << minidx + 1;
	}
	return 0;
}