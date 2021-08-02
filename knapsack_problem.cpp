#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
	double ans1 = (double)p1.first / p1.second;
	double ans2 = (double)p2.first / p2.second;

	return ans1 > ans2;
}
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first;
		cin >> v[i].second;
	}
	int w;
	cin >> w;
	sort(v.begin(), v.end(), compare);
	int profit = 0;
	for (int i = 0; i < n; i++)
	{
		if (w >= v[i].second)
		{
			w = w - v[i].second;
			profit = profit + v[i].first;
			continue;
		}
		double vw = (double)v[i].first / v[i].second;
		profit = profit + vw * w;

		break;
	}
	cout << profit;
	return 0;
}