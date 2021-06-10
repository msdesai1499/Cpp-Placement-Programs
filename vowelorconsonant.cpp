#include <bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	cin >> c;
	int a = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	int b = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	if (a || b)
	{
		cout << "vowel";
	}
	else
	{
		cout << "consonant";
	}
	return 0;
}