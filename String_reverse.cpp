// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;

		cout << reverseWord(s) << endl;
	}
	return 0;
}

// } Driver Code Ends

//User function Template for C++

string reverseWord(string str)
{

	//Your code here

	int s = 0;
	int e = str.length() - 1;
	char temp;
	while (s < e)
	{
		temp = str[s];
		str[s] = str[e];
		str[e] = temp;
		s++;
		e--;
	}
	return str;
}