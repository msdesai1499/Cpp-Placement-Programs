#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;
	for (i = n; i >= 1; i--)
	{
		for (j = i; j >= 1; j--)
		{
			cout << "*";
		}

		cout << endl;
	}
	return 0;
}