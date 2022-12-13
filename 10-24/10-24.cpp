#include<stdio.h>
int main()
{
	double F, C;
	scanf_s("%lf", &F);
	C = 5 * (F - 32) / 9;
	printf("Celsius=%lf", C);
	int value;
	for (value = 36; value > 0; value /= 2)
		printf("%3lf", value);
	int line = 1,hang=1;
	for (line = 1; line <= 4; line++)
	{
		for (hang = 1; hang <= 8; hang++)
		{
			printf("$");
		}printf("\n");
	}
	int i = 0;
	
	do
		printf("Bye! ");
	while (i++ < 8);
	long a = 1;
	double b = 1.0;
	int k;
	for (k = 0; k <= 9; k++)
	{
		printf("%d %d %.9f\n", a, k, b);
		a *= 3;
		b /= 3.0;
	}
	int mi = 1,ii=1;
	char ch = 'A';
	for (mi = 1; mi <= 6; mi++)
	{
		for (ch = ('A' + 5), ii = 1; ii <= mi; ii++, ch--)
		{

			printf("%c", ch);


		}
		printf("\n");
	}
	int mii = 0;
	int iii = 1;
	int ret = 0;
	char chh = 'A';
	for (mii = 0,ret=0; mii < 6; mii++)
	{
		ret += mii;
			for (chh = 'A' + ret,iii=1;iii<=mii+1 ;iii++, chh++)
			{
				printf("%c", chh);
			}
		printf("\n");
	}
	
	int o , max, min,squarter,cubic;
	printf("请输入此表格的上限：");
	scanf_s("%d", &max);
	printf("请输入此表格的下限：");
		scanf_s("%d", &min);
		for (o=min;o <= max && o >= min; o++)
	{
		squarter = o * o;
		cubic = o * o * o;
		printf("%d %d %d", o, squarter, cubic);
		printf("\n");
	}
		const int score = 8;
		int add[score];
		int uio = 0;
		int iiii = 7;
		
			
		scanf_s("%d", &add[score]);
		for (iiii = 7; iiii >= 0; iiii--)
		{

			printf("%d", add[iiii]);
		}
		
		
		

			return 0;
	
	
	
}
//int a,b,c,average,area;
// scanf("%d"%d"%d",&a,&b,&c);
//
//average=a+b+c/2;
//area=sqrt(average*（average-a）*（average-b）*（average-c）)；
//printf("%d",area);