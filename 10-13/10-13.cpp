#include<stdio.h>
#include<string.h>
#define  diversity 92.5
void god(void);
int main()
{
	float  b;
	char a;
	scanf_s("%c", &a);
	b = a / 4.0;
	printf("there are %f legs.",b);
	int m;
	scanf_s("%d", &m);

	printf("%c", m);
	god();
	float q = 64.25;
	printf("Enter a floating-point value: %.2f", q);
	printf("Enter a floating-point value: %f", q);
	printf("exponential notation:%e", q);//%2f是把float的所有位数输出2位,包括小数点,如果不组2位,补0,如果超过2位,按照实际输出	% .2f是float后的小数只输出两位。

		//例如：

		//printf("%2f, %2f, %.2f", 123.1, 123.123, 123.123);

	//VS的输出就是：123.100000, 123.123000, 123.12
	int h;
	scanf_s("%d", &h);
	double ret = h * 3.156e7;
	printf("你的年龄有%lf秒", ret);
	char name[40];
	float weight,volume;
	int size,letters;
	printf("Hi! What's your first name?\n");
	scanf_s("%s", name,40);
	printf("%s what's your weight in pounds?\n",name);
	scanf_s("%f\n", &weight);
	volume = weight / diversity;
	printf("Well, Christine, your volume is %f cubic feet\n", volume);
	size = sizeof(name);
	letters = strlen(name);
	getchar();
	printf("Also, your first name has %d letters,and we have %d store it.\n", letters, size);
	float g = 678.893f;
	printf("%3f\n", g);//不太懂为什么%2f等等没有任何区别
	printf("%2f\n", g);
	printf("%4f\n", g);

		
	




	return 0;
	
}
void god(void)
{
	printf("\a");
	printf("Startled by the sudden sound, Sally shouted,\nBy the Great Pumpkin, what was that!");
}