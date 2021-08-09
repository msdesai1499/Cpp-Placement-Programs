#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;
int main()
{
	string s = "Mandar";
	char c = 122;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] < c)
		{
			c = s[i];
		}
	}
	cout << c;
	return 0;
}