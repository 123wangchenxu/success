#include<stdio.h>
#define GROUPS 5
void shuru(double arr[][5]);
double average(double arr[][5],int);
double total(double arr[][5]);
double max(double arr[][5]);
int main()
{
	
	int i = 0;
	int j = 0;
	double q = 0;
	double arr[3][5];
	shuru(arr);
	for (i = 0; i < 3; i++)
	{
		q = average(arr, i);
		printf("%lf", q);
	}
	printf("%lf", total(arr));
	printf("     %lf     ", max(arr));
	
	return 0;
}
void shuru(double arr[][5])
{
	int i = 0;
	int j = 0;
	printf("输入3组数，每组数包含5个double类型的数\n");
	for (i = 0; i < 3; i++)
	{
		printf("请输入第%d行数", i + 1);
		for (j = 0; j < 5; j++)
		{
			scanf_s("%lf", &arr[i][j]);
		}
		
	}
	
}
double average(double arr[][5],int n)
{
	
	int j = 0;
	double sum = 0;
	double average1 = 0;
		for (j = 0;j<5;j++)
		{
			sum += arr[n][j];
			
		}
		average1 = sum / 5;
		return average1;
	
}
double total(double arr[][5])
{
	int i = 0;
	int j = 0;
	double sum = 0;
	double average = 0;
	for(i=0;i<3;i++)
	{
		for (j = 0; j < 5; j++)
		{
			sum += arr[i][j];
		}
	}
	average = sum / 15.0;
	return average;
}
double max(double arr[][5])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] > arr[i][j + 1])
				arr[i][j + 1] = arr[i][j];
		}
		if (arr[i][4] > arr[i + 1][0] && i < 2)
			arr[i + 1][0] = arr[i][4];
	}
	double q = arr[2][4];
	return q;
}



/*13.编写一个程序，提示用户输入3组数，每组数包含5个double类型的数
（假设用户都正确地响应，不会输入非数值数据）。该程序应完成下列任

务。
a.把用户输入的数据储存在3×5的数组中
b.计算每组（5个）数据的平均值
c.计算所有数据的平均值
d.找出这15个数据中的最大值
e.打印结果
每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。完
成任务b，要编写一个计算并返回一维数组平均值的函数，利用循环调用该
函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c
和d的函数应把结果返回主调函数。*/