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
	int maxele = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > maxele)
		{
			maxele = a[i];
		}
	}
	int freq[maxele + 1];
	for (int i = 0; i <= maxele; i++)
	{
		freq[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		freq[a[i]]++;
	}

	int cnt = 0;
	for (int i = 0; i <= maxele; i++)
	{

		if (freq[i] > 0)
		{

			int value = 100000 - i;
			a[cnt] = 100000 * freq[i] + value;
			cnt++;
		}
	}

	sort(a, a + cnt, greater<int>());

	vector<int> v;
	for (int i = 0; i < cnt; i++)
	{

		int frequency = a[i] / 100000;

		int value = 100000 - (a[i] % 100000);

		for (int j = 0; j < frequency; j++)
		{
			v.push_back(value);
		}
	}
	cout << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}