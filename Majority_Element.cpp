// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	// Function to find majority element in the array
	// a: input array
	// size: size of input array
	int findCand(int arr[], int n)
	{
		int cnt = 1, candele = 0;
		for (int i = 1; i < n; i++)
		{
			if (arr[candele] == arr[i])
			{
				cnt++;
			}
			else
			{
				cnt--;
			}

			if (cnt == 0)
			{
				candele = i;
				cnt = 1;
			}
		}

		return arr[candele];
	}

	bool verify(int arr[], int n, int cand)
	{
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == cand)
			{
				cnt++;
			}
		}
		if (cnt > (n / 2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int majorityElement(int arr[], int size)
	{

		// your code here
		int cand = findCand(arr, size);
		cout << cand << endl;
		if (verify(arr, size, cand))
		{
			return cand;
		}
		else
		{
			return -1;
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
		int n;
		cin >> n;
		int arr[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		Solution obj;
		cout << obj.majorityElement(arr, n) << endl;
	}

	return 0;
}
// } Driver Code Ends