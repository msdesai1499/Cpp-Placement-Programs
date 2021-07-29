#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<pair<int, int>> vect;

	for (int i = 0; i < m; i++)
	{
		int x1, x2;
		cin >> x1 >> x2;
		vect.push_back(make_pair(x1, x2));
	}

	bool b[n];
	for (int i = 0; i < n; i++)
	{
		b[i] = false;
	}
	b[0] = true;
	int pos = 1;
	int x = 0;
	int cnt = 1;
	while (true)
	{
		for (int i = 0; i < vect.size(); i++)
		{
			if (vect[i].first == pos)
			{
				if (a[vect[i].first - 1] != a[vect[i].second - 1])
				{
					b[vect[i].second] = true;
					pos = vect[i].second;
					x = 1;
					cnt++;
 
					break;
				}
			}
			else
			{
				x = 0;
			}
		}
		if (x == 0)
		{
			break;
		}
	}
	cout << cnt;
}