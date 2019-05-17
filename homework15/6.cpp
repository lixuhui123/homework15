#include<stdio.h>
#include<stdlib.h>
//Ä£ÄâÊµÏÖstrcpy
int main()
{
	char str1[50] = "abcd";
	char str2[] = "efghlkjg";
	int i = 0;
	for (i = 0; str2[i]; ++i)
	{
		str1[i] = str2[i];
	}
	puts(str1);
	system("pause");
	return 0;
}