
#include <bits/stdc++.h>
using namespace std;

int fact_fun(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}
int main()
{
	int n;
	cin >> n;
	int i, j;
	int coef;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n - i; j++)
		{
			cout << " ";
		}
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				coef = 1;
			}
			else
			{
				coef = fact_fun(i) / (fact_fun(i - j) * fact_fun(j));
			}
			cout << coef << " ";
		}

		cout << endl;
	}

	return 0;
}