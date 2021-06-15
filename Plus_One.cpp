// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
	vector<int> increment(vector<int> arr, int N)
	{
		vector<int> ans;
		int carry = 0, result;

		result = arr[N - 1] + 1;

		if (result > 9)
		{

			ans.insert(ans.begin(), result % 10);
			carry = result / 10;
		}
		else
		{
			ans.insert(ans.begin(), result);
		}
		for (int i = N - 2; i >= 0; i--)
		{

			result = arr[i] + carry;
			if (result > 9)
			{

				ans.insert(ans.begin(), result % 10);
				carry = result / 10;
			}
			else
			{
				ans.insert(ans.begin(), result);
			}
		}
		return ans;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N;
		char c;

		cin >> N;
		vector<int> arr(N);

		for (int i = 0; i < N; i++)
			cin >> arr[i];

		Solution ob;
		vector<int> res = ob.increment(arr, N);
		for (int i : res)
			cout << i << " ";
		cout << endl;
	}
	return 0;
} // } Driver Code Ends