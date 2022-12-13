#include<stdio.h>
#include<math.h>
#define ZHUANHUA 60
void lifang();
void temperatures(float ui);
int main()
{
	int  n;
	scanf_s("%d", &n);
;
	while (n > 0)
	{
		int h = n / ZHUANHUA;
		int min = n - h * ZHUANHUA;
		printf("%d小时%d分钟\n", h, min);
		scanf_s("%d", &n);

		
		
	}
	int m;
	int i = 1;
	scanf_s("%d", &m);
	
	while(i<=11)
	{
		printf("%d\n", m);
			m++;
		i++;
	}
	int week, days,total;
	scanf_s("%d", &total);
	week = total / 14;
	days = total % 14;
	printf("这些天是%d周%d天", week, days);
	float mi;
	int feet;
	printf("Enter a height in centimeters:");
	scanf_s("%f", &mi);
	while(mi>0)
	{
		feet = mi / 32;
		printf("%.1f cm=%d feet\n", mi, feet);
		printf("Enter a height in centimeters (<=0 to quit):\n ");
		scanf_s("%f", &mi);

	}

	printf("bye");
	
	lifang();
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	int num1,num2,hj;
	scanf_s("%d", &num1);
	printf("Now enter the first operand:");
	scanf_s("%d", &num2);
	while (num1 > 0)
	{
		hj = num1 % num2;
		printf("%d %% %d is %d", num1, num2, hj);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf_s("%d", &num1);
		
	}
	
	printf("Done");

	double temper;
	int bi;
	
	bi=scanf_s("%lf", &temper);
	
	while (bi==1)
	{
		temperatures(temper);
		bi=scanf_s("%lf", &temper);
	}


	

	return 0;
	
}
void lifang()
{
	double wodetian, hio=0;
	scanf_s("%lf", &hio);
	wodetian=pow(hio, 3);
	printf("%lf",wodetian);
}
void temperatures(float ui) {
	float huashiwendu = 5.0 / 9.0 * (ui - 32.0);
	float kaishiwendu = huashiwendu + 273.16;
	printf("%f\n%f\n", huashiwendu, kaishiwendu);
}