#include<stdio.h>
int fun(int a, int b, int r[]);
#define max 1000
int main()
{
	int a[max] = { 0 };
	
	int ai, bi;
	scanf_s("%d %d", &ai, &bi);
	fun( ai, bi, a);
	return 0;
}
int fun(int a, int b, int r[])
{
	int j = 0;
	int i = a;
	int q = 0;
	int count = 0;
	for (i = a, j = 0; i <= b; i++)
	{

		if ((i % 7 == 0 && i % 11 != 0) || (i % 7 != 0 && i % 11 == 0))
		{
			r[j] = i;
			count++;
			j++;
		}
	}
	for (q = 0; q < count; q++)
	{
		if (q != count - 1)
			printf("%d ", r[q]);
		else
			printf("%d\n", r[q]);
	}
	return 0;
}
	

//编写程序：编写函数fun，求出a到b之内能被7或者11整除，但不能同时被7和11整除的所有正数，
//并将他们放在数组中，函数返回这些数的个数。编写main函数，
// 定义一个整型数组, 可容纳1000个元素, 
//定义整型变量a, b, 输入a，b的值(输入时a小于等于b)并调用函数fun进行求解, 
//最后在main函数中输出所有符合条件的元素。

//提示 : fun的函数原型为: int fun(int a, int b, int r[]);  
//其中的r用于存放a, b之间满足条件的所有元素
