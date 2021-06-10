#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string, int> marksMap;
	marksMap["Mandar"] = 95;
	marksMap["Yogesh"] = 96;
	marksMap["Gaurav"] = 85;
	marksMap.insert({"Pratik", 86});
	map<string, int>::iterator itr;
	for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
	{
		cout << (*itr).first << " " << (*itr).second << "\n";
	}

	cout << "The size is " << marksMap.size();
	if (marksMap.find("Gaurav") == marksMap.begin())
	{
		cout << "Hello " << marksMap["Gaurav"];
	}
	return 0;
}