#include <bits/stdc++.h>
using namespace std;

static bool compare(vector<int> a, vector<int> b)
{
	return a[0] < b[0];
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<vector<int>> a;

		for (int i = 0; i < n; i++)
		{

			int f, s;
			cin >> f >> s;
			a.push_back({f, s});
		}

		int l, p;
		cin >> l >> p;
		for (int i = 0; i < n; i++)
		{
			a[i][0] = l - a[i][0];
		}

		sort(a.begin(), a.end(), compare);

		int ans = 0;
		int curr = p;

		priority_queue<int, vector<int>> pq;
		bool flag = 0;
		for (int i = 0; i < n; i++)
		{
			if (curr >= l)
			{
				break;
			}

			while (curr < a[i][0])
			{
				if (pq.empty())
				{
					flag = 1;
					break;
				}
				ans++;
				curr += pq.top();
				pq.pop();
			}

			if (flag)
				break;

			pq.push(a[i][1]);
		}

		if (flag)
		{
			cout << "-1" << endl;
			continue;
		}
		while (!pq.empty() && curr < l)
		{
			curr += pq.top();
			pq.pop();
			ans++;
		}
		if (curr < l)
		{
			cout << "-1" << endl;
			continue;
		}

		cout << ans << endl;
	}
	return 0;
}