#include <bits/stdc++.h>
using namespace std;

int fact(int m)
{
	int ans = 1;
	for (int i = 2; i <= m; i++)
	{
		ans = ans * i;
	}
	return ans;
}
int main()
{
	int n, r;
	cin >> n >> r;
	int ans = fact(n) / (fact(n - r) * fact(r));
	cout << ans;
	return 0;
}