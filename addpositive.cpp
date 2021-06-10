#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	cin >> m;
	int sum = 0;
	while (m > 0)
	{
		sum = sum + m;
		cin >> m;
	}
	cout << sum;
	return 0;
}