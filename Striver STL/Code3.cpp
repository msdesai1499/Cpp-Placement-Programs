#include <bits/stdc++.h>
using namespace std;

namespace mandar
{
	int val = 50;
	int getVal()
	{

		return val * 10;
	}
}
int main()
{
	double val = 10.0;
	cout << mandar::getVal();
	return 0;
}