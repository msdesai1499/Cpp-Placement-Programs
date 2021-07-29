#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		if ((a + b + c) != (x + y))
		{
			cout << "NO";
		}
		else if (x < min(a, min(b, c)) || y < min(a, min(b, c)))
		{
			cout << "NO";
		}
		else
		{
			cout << "YES";
		}
	}
}