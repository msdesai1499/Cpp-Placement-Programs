// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution
{
public:
	int findMaximum(int a[], int n)
	{
		// code here
		int l = 0;
		int h = n - 1;
		int mid = 0;
		while (l <= h)
		{
			mid = (l + h) / 2;

			if ((a[mid - 1] < a[mid]) && (a[mid + 1] < a[mid]))
			{
				return a[mid];
			}
			else if ((a[mid - 1] > a[mid]) && (a[mid + 1] < a[mid]))
			{
				h = mid - 1;
			}
			else if ((a[mid - 1] < a[mid]) && (a[mid + 1] > a[mid]))
			{
				l = mid + 1;
			}
		}
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
		int arr[n];
		for (i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		Solution ob;
		auto ans = ob.findMaximum(arr, n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends