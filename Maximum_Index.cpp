// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
	// arr[]: input array
	// n: size of array
	// Function to find the maximum index difference.
	int maxIndexDiff(int arr[], int n)
	{

		int minL[n];
		minL[0] = arr[0];
		for (int i = 1; i < n; i++)
		{

			minL[i] = min(minL[i - 1], arr[i]);
		}

		int maxR[n];
		maxR[n - 1] = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			maxR[i] = max(maxR[i + 1], arr[i]);
		}
		int i = 0, j = 0;
		int maxdiff = 0;
		while (i < n && j < n)
		{
			if (minL[i] <= maxR[j])
			{
				maxdiff = max(maxdiff, j - i);
				j++;
			}
			else
			{
				i++;
			}
		}
		return maxdiff;
	}
};

// { Driver Code Starts.

/* Driver program to test above functions */
int main()
{
	int T;
	//testcases
	cin >> T;
	while (T--)
	{
		int num;
		//size of array
		cin >> num;
		int arr[num];

		//inserting elements
		for (int i = 0; i < num; i++)
			cin >> arr[i];
		Solution ob;

		//calling maxIndexDiff() function
		cout << ob.maxIndexDiff(arr, num) << endl;
	}
	return 0;
} // } Driver Code Ends