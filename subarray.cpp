#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{

		cin >> a[i];
	}
	int maxsum = INT_MIN;
	int sum;
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++)
		{
			sum = 0;
			for (int k = i; k <= j; k++)
			{
				sum += a[k];
				// cout << a[k] << " ";
			}
			maxsum = max(sum, maxsum);
			// cout << endl;
		}
	}
	cout << maxsum;

	return 0;
}