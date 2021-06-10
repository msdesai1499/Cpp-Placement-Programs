// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
	long long findNth(long long N)
	{

		long long res = 0, rem, pv = 1;
		while (N != 0)
		{
			rem = N % 9;
			res = res + (pv * rem);

			pv = pv * 10;
			N = N / 9;
		}

		return res;
	}
};

// { Driver Code Starts.
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, ans;
		cin >> n;
		Solution obj;
		ans = obj.findNth(n);
		cout << ans << endl;
	}
}

// } Driver Code Ends