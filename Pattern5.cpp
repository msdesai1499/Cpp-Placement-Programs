#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;
	int k = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << k << " ";
			k++;
		}

		cout << endl;
	}
	return 0;
}