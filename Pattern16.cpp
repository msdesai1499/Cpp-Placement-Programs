#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

	int m, n;
	cin >> m >> n;
	int arr1[m];
	int arr2[n];

	for (int i = 0; i < m; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
	int arr3[m + n];
	int i = 0;
	for (i = 0; i < m; i++)
	{
		arr3[i] = arr1[i];
	}

	for (int j = 0; j < n; j++)
	{

		arr3[i] = arr2[j];
		i++;
	}

	sort(arr3, arr3 + m + n, greater<int>());
	for (int j = 0; j < m + n; j++)
	{
		cout << arr3[j] << endl;
	}
	return 0;
}