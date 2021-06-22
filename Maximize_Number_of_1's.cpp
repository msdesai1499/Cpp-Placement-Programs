// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
	// m is maximum of number zeroes allowed to flip
	// n is size of array
	int findZeroes(int arr[], int n, int m)
	{
		// code here

		int rcnt = 0, lcnt = 0;
		int zcnt = 0, bstwin = 0;

		while (rcnt < n)
		{
			if (zcnt <= m)
			{
				if (arr[rcnt] == 0)
				{
					zcnt++;
				}
				rcnt++;
			}
			if (zcnt > m)
			{
				if (arr[lcnt] == 0)
				{
					zcnt--;
				}
				lcnt++;
			}

			if ((rcnt - lcnt) > bstwin && (zcnt <= m))
			{
				bstwin = rcnt - lcnt;
			}
		}

		return bstwin;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, i, m;
		cin >> n;
		int arr[n];
		for (i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cin >> m;
		Solution ob;
		auto ans = ob.findZeroes(arr, n, m);
		cout << ans << "\n";
	}
	return 0;
} // } Driver Code Ends