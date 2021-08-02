// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include <bits/stdc++.h>
using namespace std;

// A structure to represeNnt a job
struct Job
{
	int id;		// Job Id
	int dead;	// Deadline of job
	int profit; // Profit if job is over before or on deadline
};

// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution
{
public:
	static bool compare(struct Job a, struct Job b)
	{
		return a.profit > b.profit;
	}

	vector<int> JobScheduling(struct Job arr[], int n)
	{
		// your code here
		sort(arr, arr + n, compare);
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			if (max < arr[i].dead)
			{
				max = arr[i].dead;
			}
		}

		int ans[max] = {0};
		for (int i = 0; i < n; i++)
		{
			int pos = arr[i].dead - 1;
			while (pos >= 0 && ans[pos] != 0)
			{
				pos--;
			}
			if (pos >= 0)
			{
				ans[pos] = arr[i].profit;
			}
		}

		int sum = 0, cnt = 0;
		for (int i = 0; i < max; i++)
		{
			if (ans[i] > 0)
			{
				cnt++;
				sum = sum + ans[i];
			}
		}
		vector<int> res;
		res.push_back(cnt);
		res.push_back(sum);

		return res;
	}
};

// { Driver Code Starts.
// Driver program to test methods
int main()
{
	int t;
	//testcases
	cin >> t;

	while (t--)
	{
		int n;

		//size of array
		cin >> n;
		Job arr[n];

		//adding id, deadline, profit
		for (int i = 0; i < n; i++)
		{
			int x, y, z;
			cin >> x >> y >> z;
			arr[i].id = x;
			arr[i].dead = y;
			arr[i].profit = z;
		}
		Solution ob;
		//function call
		vector<int> ans = ob.JobScheduling(arr, n);
		cout << ans[0] << " " << ans[1] << endl;
	}
	return 0;
}

// } Driver Code Ends