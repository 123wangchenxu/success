#include<stdio.h>
int main()
{
	
	const char* s = "hellouo";
	printf("%zd",sizeof(s));
	char a[10];
	printf("%d", sizeof(a));
	
	return 0;
}