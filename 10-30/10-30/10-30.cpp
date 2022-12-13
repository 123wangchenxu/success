#include<stdio.h>
#include<math.h>

int main()
{
	int q;
	printf("请输入一个奇数，作为该菱形的行数");
	scanf_s("%d", &q);
	int i=0,j=1,m=q,jj=1,ii=4,jjj=1,mm=0,jjjj=1,qq=q%2+q/2;
	int mmm = 2 * qq;
	for (i = 0; i <qq ; i++)
	{
		mmm = mmm - 2;
		for (jjjj = 1; jjjj<= mmm; jjjj++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2*(i+1)-1; j ++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (ii = qq; ii < q; ii++)
	{
		jj = 1;
		
		m = m - 2;
		mm = 2 + mm;
		for (jjj = 1; jjj <= mm; jjj++)
		{
			printf(" ");
		}
		for (jj = 1; jj <= m; jj++)
		{
			
		printf("* ");
	}
		
		printf("\n");
	}
	printf("你好厉害啊，你能输出%d行的菱形", q);

	return 0;
}