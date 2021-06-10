#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin >> n;
	if (n % 2 == 0 && n % 3 == 0)
	{
		cout << "Divisible by both";
	}
	else if (n % 2 == 0)
	{
		cout << "Divisible by 2";
	}
	else if (n % 3 == 0)
	{
		cout << "Divisible by 3";
	}
	return 0;
}