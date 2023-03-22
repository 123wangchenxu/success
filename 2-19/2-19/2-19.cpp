#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char str[20];
	int i = 0;
	int j = 0;
	gets_s(str);
	for (; str[i] != '\0'; i++)
	{
		if(str[i]!=' ')
		{
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	puts(str);
	return 0;
}