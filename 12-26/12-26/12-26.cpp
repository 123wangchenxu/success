#include<stdio.h>
#include<string.h>
int main()
{
	
	struct date { int days; char months[40]; int years; }a;
	int i = 0;
	int m = 0;
	a.months[39] = '\0';
	printf("请输入日：\n");
	scanf_s("%d", &a.days);
	getchar();
	printf("请输入月：\n");
	scanf_s("%s", a.months, 40);
	printf("请输入年：\n");
	scanf_s("%d",&a.years);
	int su[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (a.years % 400 == 0 || a.years % 4 == 0)
	{
		su[1] = 29;
	}
	if (*a.months == '1' || !strncmp(a.months,"Jau",3))
		m = 1;
	if (*a.months == '2' || !strncmp(a.months, "Feb", 3))
		m = 2;
	if (*a.months == '3' || !strncmp(a.months, "Mar", 3))
		m = 3;
	if (*a.months == '4' || !strncmp(a.months, "Apr", 3))
		m = 4;
	if (*a.months == '5' || !strncmp(a.months, "May", 3))
		m = 5;
	if (*a.months == '6' || !strncmp(a.months, "Jun", 3))
		m = 6;
	if (*a.months == '7' || !strncmp(a.months, "Jul", 3))
		m = 7;
	if (*a.months == '8' || !strncmp(a.months, "Aug", 3))
		m = 8;
	if (*a.months == '9' || !strncmp(a.months, "Sep", 3))
		m = 9;
	if (!strncmp(a.months, "10", 2) || !strncmp(a.months, "Oct", 3))
		m = 10;
	if (!strncmp(a.months, "11", 2) || !strncmp(a.months, "Nov", 3))
		m = 11;
	if (!strncmp(a.months, "12", 2) || !strncmp(a.months, "Dec", 3))
		m = 12;
	int j = 0;
	int count = 0;
	for (j = 0; j < m - 1; j++)
	{
		count += su[j];
	}
	return count+a.days;
}
//2.编写一个函数，提示用户输入日、月和年。月份可以是月份号、月份
//名或月份名缩写。然后该程序应返回一年中到用户指定日子（包括这一天）
//的总天数。