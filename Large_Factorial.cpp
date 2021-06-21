// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
	vector<long long> factorial(vector<long long> a, int n)
	{
		long long mod = 1000000007;
		vector<long long> fact;
		vector<long long> res;
		fact.push_back(1);
		long long size = 100000;
		for (long long i = 1; i <= size; i++)
		{
			fact.push_back((fact[i - 1] * i) % mod);
		}
		for (int i = 0; i < n; i++)
		{
			res.push_back(fact[a[i]]);
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
		int n, i;
		cin >> n;
		vector<long long> a(n);
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		Solution ob;
		vector<long long> res = ob.factorial(a, n);
		for (i = 0; i < n; i++)
		{
			cout << res[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends