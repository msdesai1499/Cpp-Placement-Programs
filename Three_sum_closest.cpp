// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution
{
public:
	int threeSumClosest(vector<int> nums, int target)
	{
		// Your code goes here

		int result = nums[0] + nums[1] + nums[nums.size() - 1];
		sort(nums.begin(), nums.end());

		for (int i = 0; i < nums.size() - 2; i++)
		{

			int a_ptr = i + 1;
			int b_ptr = nums.size() - 1;

			while (a_ptr < b_ptr)
			{
				int curr_sum = nums[i] + nums[a_ptr] + nums[b_ptr];
				if (curr_sum > target)
				{
					b_ptr--;
				}
				else
				{
					a_ptr++;
				}

				if (abs(curr_sum - target) < abs(result - target))
				{
					result = curr_sum;
				}
			}
		}

		return result;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int n, target;
		cin >> n >> target;

		vector<int> vec(n);

		for (int i = 0; i < n; ++i)
			cin >> vec[i];
		Solution obj;
		cout << obj.threeSumClosest(vec, target) << "\n";
	}
}

//Position this line where user code will be pasted.
// } Driver Code Ends