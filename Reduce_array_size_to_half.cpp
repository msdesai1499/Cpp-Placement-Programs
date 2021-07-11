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

	sort(a, a + n);
	int c = 1;
	vector<int> v;
	for (int i = 1; i < n; i++)
	{

		if (a[i] == a[i - 1])
		{
			c++;
		}
		else
		{
			v.push_back(c);
			c = 1;
		}
	}
	v.push_back(c);
	sort(v.begin(), v.end());

	int nhalf = n / 2, ans = 0;

	for (int i = v.size() - 1; nhalf > 0 && i >= 0; i--)
	{
		ans++;
		nhalf = nhalf - v[i];
	}
	cout << ans << endl;

	return 0;
}