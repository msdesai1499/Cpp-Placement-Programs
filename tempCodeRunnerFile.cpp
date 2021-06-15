void rearrange(long long *arr, int n)
	{

		long long me = arr[n - 1] + 1;
		int l = 0, h = n - 1;
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				arr[i] = arr[i] + arr[h] % me * me;
				h--;
			}
			else
			{
				arr[i] = arr[i] + arr[l] % me * me;
				l++;
			}
		}

		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i] / me;
		}
	}