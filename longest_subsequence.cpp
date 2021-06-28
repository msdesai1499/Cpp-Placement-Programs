// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	// arr[] : the input array
	// N : size of the array arr[]

	//Function to return length of longest subsequence of consecutive integers.
	int findLongestConseqSubseq(int a[], int N)
	{
		int len = 100000;
		int sub[len];
		memset(sub, -2, len);
		for (int i = 0; i < N; i++)
		{

			sub[a[i]] = a[i];
		}
		int cnt = 1, mxcnt = -1;
		for (int i = 1; i < len; i++)
		{

			if (mxcnt < cnt)
			{
				mxcnt = cnt;
			}
			if (sub[i] + 1 == sub[i + 1])
			{

				cnt++;
			}
			else
			{
				cnt = 1;
			}
		}
		return mxcnt;
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
	int t, n, i, a[100001];
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (i = 0; i < n; i++)
			cin >> a[i];
		Solution obj;
		cout << obj.findLongestConseqSubseq(a, n) << endl;
	}

	return 0;
} // } Driver Code Ends