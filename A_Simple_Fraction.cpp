// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	string fractionToDecimal(int numerator, int denominator)
	{
		if (numerator == 0)
		{
			return "0";
		}

		int sign = (numerator < 0) ^ (denominator < 0) ? -1 : 1;

		numerator = abs(numerator);
		denominator = abs(denominator);

		int div = numerator / denominator;
		string res = "";

		if (sign == -1)
		{
			res = res + "-";
		}

		res = res + to_string(div);

		int rem = numerator % denominator;
		if (rem == 0)
		{
			return res;
		}

		res = res + ".";
		map<int, int> mappt;
		bool repeat = false;
		int index;

		while (rem != 0 && !repeat)
		{

			if (mappt.find(rem) != mappt.end())
			{
				index = mappt[rem];
				repeat = true;
				break;
			}

			mappt[rem] = res.size();
			rem = rem * 10;

			int temp = rem / denominator;
			res = res + to_string(temp);
			rem = rem % denominator;
		}

		if (repeat)
		{
			res = res + ")";
			res.insert(index, "(");
		}

		return res;
	}
};

// { Driver Code Starts.
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans << "\n";
	}
	return 0;
} // } Driver Code Ends