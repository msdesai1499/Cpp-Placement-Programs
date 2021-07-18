#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	// string s1, s2;
	// s1 = "Fam";
	// s2 = "ily";
	// // s1.append(s2);
	// s1 = s1 + s2;
	// cout << s1[2];

	// string abc = "njasxka asxbjabsj";
	// abc.clear();
	// cout << abc;

	// string s1 = "abc";
	// string s2 = "abc";
	// if (s1.compare(s2) == 0)
	// {
	// 	cout << "Strings are equal";
	// }

	// string s1 = "nincompoop";
	// s1.erase(3, 4);
	// cout << s1;

	// cout << s1.find("com");
	// s1.insert(3, "lol");
	// cout << s1;

	// cout << s1.length();

	// for (int i = 0; i < s1.length(); i++)
	// {
	// 	cout << s1[i] << " ";
	// }

	// string s = s1.substr(6, 4);
	// cout << s;

	// string s1 = "786";
	// int x = stoi(s1);
	// cout << x;

	// int x = 786;
	// cout << to_string(x);

	string s1 = "xcvmnmzcxv";
	sort(s1.begin(), s1.end());
	cout << s1;
	return 0;
}