#include <iostream>
#include <string.h>
using namespace std;
char *Reverse(char *pString)
{
	if (pString == NULL)
	{
		return NULL;
	}

	char *pStart = pString;
	char *pEnd = pStart + strlen(pString) - 1;

	while (pEnd > pStart)
	{
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}
	return pString;
}

int main()
{
	char str[100] = "hello";
	cout << Reverse(str);

	return 0;
}