#include <bits/stdc++.h>
using namespace std;

int bin(int arr[], int n, int key)
{

	int l = 0;
	int h = n - 1;
	int mid;
	while (l < h)
	{
		mid = (l + h) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] < key)
		{
			l = mid + 1;
		}
		else
		{
			h = mid - 1;
		}
	}
	return -1;
}
int main()
{

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int key;
	cin >> key;

	cout << bin(arr, n, key);
}