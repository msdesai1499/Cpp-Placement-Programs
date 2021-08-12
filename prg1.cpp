#include <iostream>
#include <vector>
using namespace std;

int main()
{

	vector<int> v;

	int i = 0;
	int d;
	do
	{
		cin >> d;
		v.push_back(d);
	} while (d >= 0);

	v.pop_back();

	int cnt = 0;
	int start = 0, end = 0;
	i = 0;
	int max = 0;

	bool flag = false;

	while (i < v.size())
	{

		if (v[i] > 99 && v[i] < 1000)
		{

			if (v[i] > max)
			{
				max = v[i];
			}
			cnt++;
			flag = true;
		}
		else
		{

			if (flag)
			{

				v.erase(v.begin() + start, v.begin() + start + cnt);
				v.insert(v.begin() + start, max);
				cnt = 0;
				max = 0;

				for (i = 0; i < v.size(); i++)
				{

					cout << v[i] << endl;
				}
				cout << endl;

				start++;
				i = start;
			}
			else
			{

				start++;
			}

			flag = false;
		}

		i++;
	}

	// for (i = 0; i < v.size(); i++)
	// {

	// 	cout << v[i] << endl;
	// }

	return 0;
}