#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> m, vector<int> n)
{
	if (m[0] == n[0])
		return m[1] > n[1];
	else
		return m[0] < n[0];
}

int main()
{
	int c, r;
	cin >> c >> r;
	vector<int> a(c);
	for (int i = 0; i < c; i++)
	{
		cin >> a[i];
	}

	vector<vector<int>> road;
	for (int i = 0; i < r; i++)
	{
		int s, e;
		cin >> s >> e;
		road.push_back({s, e});
	}

	sort(road.begin(), road.end(), compare);
	int curr = 0;
	int cnt = 1;
	for (int i = 0; i < r; i++)
	{
		if (curr == road[i][0] - 1)
		{
			if (a[road[i][0] - 1] != a[road[i][1] - 1])
			{

				curr = road[i][1] - 1;
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}