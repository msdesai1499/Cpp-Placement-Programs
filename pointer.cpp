#include <bits/stdc++.h>
using namespace std;
int main()
{
	// int a = 10;
	// int *ptra;
	// ptra = &a;
	// cout << ptra << endl;
	// ptra++;
	// cout << ptra << endl;

	int arr[] = {10, 20, 30};
	// cout << arr;
	// int *ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		cout << *(arr + i) << " ";
	}

	int a = 10;
	int *p = &a;
	int **q = &p;
	cout << *q << endl;
	cout << **q << endl;
	
	return 0;
}