#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int g, c;
	while (t--)
	{
		cin >> g >> c;
		cout << (c * c) / (2 * g) << endl;
	}
	return 0;
}