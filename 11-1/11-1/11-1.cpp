
#include <stdio.h>
//10.重写复习题9，但这次不能使用continue和goto语句。
int main(void)
{


	char chh, chhh;
	int line = 0, b = 0, c = 0,d=0,e,f=0,sum=0,g=0,ret=0;
	
	
	
	while ((chhh = getchar()) != '#')
	{
		if (chhh == '\n')
			continue;
		printf("%c %d", chhh, chhh);
		d++;
		if (d % 8 == 0)
			printf("\n");
		

	}
	while ((scanf_s("%d", &e)) == 1 && e != 0)
	{
		if (e % 2 == 0)
		{
			sum += e;
			f++;
		}
		else
		{
			g++;
			ret += e;
		}



		
	}
	int adv = sum / f;
	int adg = ret / g;
	printf("这些偶数有%d个，平均值为%d。这些奇数有%d个，平均值为%d。", f, adv, g, adg);
	return 0;
}