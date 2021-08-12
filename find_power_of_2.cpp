#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;
	if ((n & (n - 1)) == 0)
	{
		cout << "Number is in power of 2";
	}
	else
	{
		cout << "Number is not in power of 2";
	}
	return 0;
}