#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	char c;
	cin >> c;
	switch (c)
	{
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	case '%':
		cout << a % b;
		break;
	default:
		cout << "Enter different operator";
	}

	return 0;
}