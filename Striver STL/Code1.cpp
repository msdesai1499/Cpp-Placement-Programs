#include <bits/stdc++.h>
using namespace std;

struct node
{
	string str;
	int num;
	double doub;
	char x;
	node(string str1, int num1, double doub1, char x1)
	{
		str = str1;
		num = num1;
		doub = doub1;
		x = x1;
	}
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
	cout << val << endl;
	cout << mandar::getVal();
	node striver("Mandar", 81, 76.5, 'A');
	cout << striver.doub << endl;
	cout << striver.num << endl;
	cout << striver.str << endl;
	cout << striver.x << endl;
}