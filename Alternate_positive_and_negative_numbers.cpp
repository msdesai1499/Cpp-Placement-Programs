// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution
{
public:
	void rearrange(int arr[], int n)
	{
		int pos[n];
		int neg[n];
		int ng = 0, ps = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < 0)
			{
				neg[ng] = arr[i];
				ng++;
			}
			else
			{
				pos[ps] = arr[i];
				ps++;
			}
		}
		int x = 0, y = 0;
		bool flag;
		if (ps != 0)
		{
			flag = true;
		}
		else
		{
			flag = false;
		}

		for (int i = 0; i < n; i++)
		{
			if (flag)
			{
				arr[i] = pos[x];
				x++;
				if (y != ng)
				{
					flag = false;
				}
			}
			else
			{
				arr[i] = neg[y];
				y++;
				if (x != ps)
				{
					flag = true;
				}
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
		ob.rearrange(arr, n);
		for (i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends