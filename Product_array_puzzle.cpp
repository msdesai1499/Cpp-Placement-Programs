// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
	// nums: given vector
	// return the Product vector P that hold product except self at each index
	vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
	{

		//code here

		long long int product = 1;
		int flag = 0;
		for (int i = 0; i < n; i++)
		{
			if (nums[i] == 0)
			{
				flag++;
				continue;
			}
			product *= nums[i];
		}
		vector<long long int> sub;
		for (int i = 0; i < n; i++)
		{
			if (nums[i] == 0)
			{
				if (flag > 1)
				{
					sub.push_back(0);
				}
				else
				{
					sub.push_back(product);
				}

				continue;
			}
			if (flag != 0)
			{

				sub.push_back(0);
				continue;
			}
			sub.push_back(product / nums[i]);
		}
		return sub;
	}
};

// { Driver Code Starts.
int main()
{
	int t; // number of test cases
	cin >> t;
	while (t--)
	{
		int n; // size of the array
		cin >> n;
		vector<long long int> arr(n), vec(n);

		for (int i = 0; i < n; i++) // input the array
		{
			cin >> arr[i];
		}
		Solution obj;
		vec = obj.productExceptSelf(arr, n); // function call

		for (int i = 0; i < n; i++) // print the output
		{
			cout << vec[i] << " ";
		}
		cout << endl;
	}
	return 0;
} // } Driver Code Ends