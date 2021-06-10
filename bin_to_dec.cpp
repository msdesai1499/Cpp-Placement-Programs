#include <bits/stdc++.h>
using namespace std;
int bintodec(int n)
{
	int rem, ans = 0, x = 1;
	while (n != 0)
	{
		rem = n % 10;
		ans = ans + (rem * x);
		x = x * 2; //Same for octal just replace 2 with 8
		n = n / 10;
	}
	return ans;
}
int main()
{
	int n;
	cin >> n;

	cout << bintodec(n) << endl;
	return 0;
}