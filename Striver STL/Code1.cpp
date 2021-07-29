#include <bits/stdc++.h>
using namespace std;

struct node
{
	string str;
	int num;
	double doub;
	char x;
};

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

	double val = 10;
	cout << val;
	cout << mandar::getVal();
	node mandar;
	mandar.str = "Mandar";
}