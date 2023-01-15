#include<stdio.h>
int main()
{
	int a = 1, b = 1, c = 2;
	printf("%d", a || b + c && b - c);
	printf("%d", !((a < b) && !c || 1));
	return 0;
}