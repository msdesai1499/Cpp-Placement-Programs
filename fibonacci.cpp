#include <bits/stdc++.h>
using namespace std;

void fib(int n)
{
	int t1 = 0, t2 = 1;
	cout << t1 << endl;
	cout << t2 << endl;
	int next;
	for (int i = 3; i <= n; i++)
	{
		next = t1 + t2;
		cout << next << endl;
		t1 = t2;
		t2 = next;
	}
}
int main()
{
	int n;
	cin >> n;

	fib(n);
	return 0;
}
