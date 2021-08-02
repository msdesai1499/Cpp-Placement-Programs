// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include <bits/stdc++.h>
using namespace std;

// A structure to represent a job
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
	//Function to find the maximum profit and the number of jobs done.
	void swap(int *a, int *b)
	{
		int t = *a;
		*a = *b;
		*b = t;
	}
	int partition(Job arr[], int low, int high)
	{
		int pivot = arr[high].profit; // pivot
		int i = (low - 1);			  // Index of smaller element and indicates the right position of pivot found so far

		for (int j = low; j <= high - 1; j++)
		{
			// If current element is smaller than the pivot
			if (arr[j].profit < pivot)
			{
				i++; // increment index of smaller element
				swap(&arr[i].id, &arr[j].id);
				swap(&arr[i].dead, &arr[j].dead);
				swap(&arr[i].profit, &arr[j].profit);
			}
		}
		swap(&arr[i + 1].id, &arr[high].id);
		swap(&arr[i + 1].dead, &arr[high].dead);
		swap(&arr[i + 1].profit, &arr[high].profit);
		return (i + 1);
	}

	void quicks(Job arr[], int low, int high)
	{
		if (low < high)
		{
			int pi = partition(arr, low, high);

			quicks(arr, low, pi - 1);
			quicks(arr, pi + 1, high);
		}
	}
	vector<int> JobScheduling(Job arr[], int n)
	{
		// your code here
		quicks(arr, 0, n);
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			if (max < arr[i].dead)
			{
				max = arr[i].dead;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i].profit << " " << arr[i].dead << endl;
		}
		int ans[max] = {0};
		for (int i = n - 1; i >= 0; i--)
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
		cout << "hello";
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
		res.push_back(10);
		res.push_back(20);

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