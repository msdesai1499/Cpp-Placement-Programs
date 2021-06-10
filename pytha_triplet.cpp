#include <bits/stdc++.h>
using namespace std;
int main()
{

	int x, y, z, max, num1, num2;
	cin >> x >> y >> z;
	if (x > y)
	{
		if (x > z)
		{
			max = x;
			num1 = y;
			num2 = z;
		}
		else
		{
			max = z;
			num1 = x;
			num2 = y;
		}
	}
	else
	{
		if (y > z)
		{
			max = y;
			num1 = x;
			num2 = z;
		}
		else
		{
			max = z;
			num1 = x;
			num2 = y;
		}
	}

	int rhs = sqrt((num1 * num1) + (num2 * num2));
	if (max == rhs)
	{
		cout << "Pythagoras Triplet";
	}
	else
	{
		cout << "Not a Pythagoras Triplet";
	}
}