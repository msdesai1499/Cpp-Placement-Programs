#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> a, vector<int> b)
{

	return a[1] < b[1];
}
int main()
{
	int n;
	cin >> n;
	vector<vector<int>> v;
	for (int i = 0; i < n; i++)
	{
		int start, end;
		cin >> start;
		cin >> end;
		v.push_back({start, end});
	}

	sort(v.begin(), v.end(), compare);
	int take = 1;
	int curr = v[0][1];
	for (int i = 1; i < n; i++)
	{
		if (v[i][0] >= curr)
		{
			take++;
			curr = v[i][1];
		}
	}

	cout << take;
	return 0;
}