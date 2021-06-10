#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i;
	bool flag = true;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cout << "Non Prime" << endl;
			flag = false;
			break;
		}
	}
	if (flag)
	{
		cout << "prime";
	}

	return 0;
}