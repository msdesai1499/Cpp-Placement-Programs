#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Voter
{

public:
	int id;
	string fname;
	string lname, area;
	int count;
};
static bool cmp(Voter a, Voter b)
{
	return a.count > b.count;
}
int main()
{
	vector<string> vec;
	fstream file;
	string word, filename;
	filename = "input.txt";
	file.open(filename.c_str());

	while (file >> word)
	{

		vec.push_back(word);
	}
	file.close();

	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i][vec[i].length() - 1] == ',')
		{
			vec[i].pop_back();
		}
	}

	int z = vec.size() / 5;

	Voter v[z];
	int k = 0;

	int max = 0;
	for (int i = 0; i < z; i++)
	{
		v[i].id = stoi(vec[i * 5 + 0]);
		v[i].fname = vec[i * 5 + 1];
		v[i].lname = vec[i * 5 + 2];
		v[i].area = vec[i * 5 + 3];
		v[i].count = stoi(vec[i * 5 + 4]);
	}

	sort(v, v + z, cmp);

	vector<string> abc;
	cout << v[0].area << ": " << v[0].id << endl;
	abc.push_back(v[0].area);
	for (int i = 1; i < z; i++)
	{

		if (find(abc.begin(), abc.end(), v[i].area) != abc.end())
		{
			continue;
		}
		else
		{
			cout << v[i].area << ": " << v[i].id << endl;
			abc.push_back(v[i].area);
		}
	}
	return 0;
}