#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	int x, flag = 0;
	cin >> x;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == x)
			{
				cout << "Element " << arr[i][j] << " found at row " << i + 1 << " column " << j + 1;
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
	{
		cout << "Element not found";
	}
	return 0;
}