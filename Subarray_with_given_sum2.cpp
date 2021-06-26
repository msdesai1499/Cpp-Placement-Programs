#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, s;
	cin >> n >> s;
	int a[n];
	for (int i = 0; i < n; i++)
	{

		cin >> a[i];
	}
	int st = -1, en = -1, sum = 0;

	while (st <= en)
	{

		if (sum < s)
		{
			en++;
			// cout << "en  " << en << endl;
			sum = sum + a[en];
			// cout << sum << endl;
		}
		else
		{
			st++;
			// cout << "st " << st << endl;
			sum = sum - a[st];
			// cout << sum << endl;
		}
 
		if (sum == s)
		{
			cout << st + 1 << " " << en;
			break;
		}
	}
	return 0;
}