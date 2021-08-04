// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int Search(vector<int>, int);

//User code will be pasted here

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		vector<int> vec(n);

		for (int i = 0; i < n; i++)
			cin >> vec[i];

		int target;
		cin >> target;

		cout << Search(vec, target) << "\n";
	}
} // } Driver Code Ends

//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find
int Search(vector<int> a, int k)
{
	//code here

	int l = 0;
	int h = a.size() - 1;
	int mid = 0;
	while (l <= h)
	{
		mid = (l + h) / 2;
		if (a[mid] == k)
		{
			return mid;
		}
		else if (a[l] <= a[mid])
		{
			if (a[l] <= k && a[mid] >= k)
			{
				h = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
		}
		else if (a[mid] <= a[h])
		{
			if (a[mid] <= k && a[h] >= k)
			{
				l = mid + 1;
			}
			else
			{
				h = mid - 1;
			}
		}
	}
	return -1;
}