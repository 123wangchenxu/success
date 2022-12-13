#include<stdio.h>
#define ADJUST 7.31
int main()
{
	const double SCALE =0.333;
	double shoe, foot;
	printf("Shoe size (men's) foot length\n");
	shoe = 3.0;
	while(shoe<18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		


		shoe = shoe + 1.0;

	}
	printf("If the shoe fits, wear it.\n");
	int hi = 1;
	int num;

	while (hi <= 20) {
		num = hi * hi;
		printf("%d\n", num);
		hi = hi + 1;

	}
	
	int ki = 1;
	int sum = 0;
	int sui=1;
	while(ki<=64)
	{
		sui = sui* 2;
		sum = sum+sui;
		
		ki = ki + 1;
	}
	printf("%d\n", sum);
	int a = 11 % -2;
	printf("%d", a);
	int x = 7;
	int y = 9;
	int m = x * y ++;
	printf("%d%d", m, y);
	return 0;
}