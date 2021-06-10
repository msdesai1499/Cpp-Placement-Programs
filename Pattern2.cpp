#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r, c;
	cin >> r >> c;
	int i, j;
	for (i = 1; i <= r; i++)
	{
		for (j = 1; j <= c; j++)
		{
			if (i == 1 || i == r)
			{
				cout << "*";
			}
			else if (j == 1 || j == c)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}