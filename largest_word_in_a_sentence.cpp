#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	char arr[n + 1];
	cin.getline(arr, n);
	cin.ignore();
	int i = 0;
	int cnt = 0, maxcnt = 0;
	int st = 0, maxst = 0;
	while (1)
	{
		if (arr[i] == ' ' || arr[i] == '\0')
		{
			if (cnt > maxcnt)
			{
				maxcnt = cnt;
				maxst = st;
			}
			cnt = 0;
			st = i + 1;
		}
		else
		{
			cnt++;
		}

		if (arr[i] == '\0')
			break;

		i++;
	}

	cout << maxcnt << endl;

	for (int i = maxst; i < maxst + maxcnt; i++)
	{
		cout << arr[i];
	}

	return 0;
}