#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, k;
	cin >> n;
	cin >> k;
	int a[n];
	for (int i = 0; i < n; i++)
	{

		cin >> a[i];
	}

	int l = 0, h = n - 1;
	int sum = 0;
	sort(a, a + n);
	while (l < h)
	{
		sum = a[l] + a[h];

		if (sum > k)
		{
			h--;
		}
		else if (sum < k)
		{
			l++;
		}
		else
		{
			cout << a[l] << " " << a[h];
			break;
		}
	}

	return 0;
}