#include <bits/stdc++.h>
using namespace std;
int main()
{

	int num;
	cin >> num;
	int i;
	cout << 2 << endl;
	for (int n = 3; n <= num; n++)
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				break;
			}
		}
		if (i == n)
		{
			cout << n << endl;
		}
	}
	return 0;
}