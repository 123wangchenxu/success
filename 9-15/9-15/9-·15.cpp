#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d\n", i);
		i++;
	} while (i <= 10);
	int m = 0;
	for (m = 0; m <= 10; m++)
		printf("%d\n", m);
	int q = 0;
	int h = 0;
	int sum = 0;

	int ret = 1;
	for (h = 1,ret=1; h <= 3; h++)
	{
		for (q = 1,ret=1; q <= h; q++)
		{
			ret *= q;

			;
		}; sum += ret;
	}
	printf("%d\n", sum);
	return 0;
	
}