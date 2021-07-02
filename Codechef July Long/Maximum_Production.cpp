#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin >> t;
	int d, x, y, z;
	while (t--)
	{

		cin >> d >> x >> y >> z;

		int d1 = d;
		int d2 = 7 - d;

		int ans1 = 7 * x;
		int ans2 = (y * d1) + (z * d2);

		cout << max(ans1, ans2) << endl;
	}
}