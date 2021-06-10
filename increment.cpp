#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i = 10, j = 20, k;
	//10  //9	//19  //20	//9   //20  //10   //19
	k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

	cout << i << endl; //10
	cout << j << endl; //20
	cout << k << endl;

	int a = 10, b = 20;

	int c = a > b ? 10 : 20;
	cout << c;
	char ch = 'a';
	cout << int(ch);
	cout << &(a);
	return 0;
}