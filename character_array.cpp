#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin >> n;

	char arr[n + 1];
	cin >> arr;

	bool flag = true;

	int s = 0, e = n - 1;
	while (s <= e)
	{
		if (arr[s] != arr[e])
		{
			flag = false;
			break;
		}
		s++;
		e--;
	}
	if (flag)
	{
		cout << "Pallindrome";
	}
	else
	{
		cout << "Not Pallindrome";
	}

	return 0;
}