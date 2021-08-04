// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution
{
public:
	long long int floorSqrt(long long int x)
	{
		// Your code goes here

		unsigned long long int l = 0;
		unsigned long long int h = x;
		unsigned long long int mid = 0;
		while (l <= h)
		{
			mid = (l + h) / 2;
			unsigned long long int sqr1 = mid * mid;
			unsigned long long int sqr2 = (mid + 1) * (mid + 1);
			if (sqr1 <= x)
			{
				if (sqr2 > x)
				{
					return mid;
				}
				else
				{
					l = mid + 1;
				}
			}
			else
			{
				h = mid - 1;
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
		long long n;
		cin >> n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
	return 0;
}
// } Driver Code Ends