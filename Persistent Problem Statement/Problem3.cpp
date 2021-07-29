#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		int b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		int suma = 0, maxa = 0;
		for (int i = 0; i < n; i++)
		{
			suma = suma + a[i];
			if (maxa < a[i])
			{
				maxa = a[i];
			}
		}
		suma = suma - maxa;
		int sumb = 0, maxb = 0;
		for (int i = 0; i < n; i++)
		{
			sumb = sumb + b[i];
			if (maxb < b[i])
			{
				maxb = b[i];
			}
		}
		sumb = sumb - maxb;

		if (suma < sumb)
		{
			cout << "Alice" << endl;
		}
		else if (suma > sumb)
		{
			cout << "Bob" << endl;
		}
		else
		{
			cout << "Draw" << endl;
		}
	}
	return 0;
}