
#include <stdio.h>
//10.��д��ϰ��9������β���ʹ��continue��goto��䡣
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
	printf("��Щż����%d����ƽ��ֵΪ%d����Щ������%d����ƽ��ֵΪ%d��", f, adv, g, adg);
	return 0;
}