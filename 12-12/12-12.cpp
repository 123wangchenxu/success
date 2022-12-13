#include<stdio.h>
void sort(int* a, int n);
#define shuzi 100
int main()
{
	int a[10];
	int n;
	scanf_s("%d", &n);
	int* pa=a;
	sort(pa, n);
	
	
	return 0;
}
void sort(int* a, int n)
{
	int q = 0;
	for (q = 0; q < n; q++)
	{
		scanf_s("%d", a + q);
	}
	int i = 0;
	int j = 0;
	int temp = 0;
	int index = 0;
	for (i = 0; i < n-1; i++)
	{
		index = i;
		for (j = i+1; j < n; j++)
		{
			if (a[index] >= a[j])
				index = j;
		}
		if (index != i)
		{
			temp = a[i];
			a[i] = a[index];
			a[index] = temp;

		}
	}
	int z = 0;
	for (z = 0; z < n; z++)
	{
		printf("%d  ", a[z]);
	}
	printf("\n");
}
//从键盘输入n个（n≤10）整数，用交换法进行排序（非递减有序），
//结果输出排序后的序列。说明：交换法排序用函数实现，函数原型为：void sort(int* a, int n); 
//交换法排序的基本思想是：n个元素共需要n - 1趟，其中第i（从0变化至n - 2）
//趟的任务是找出本趟中最小的元素放在下标为i的位置上，每趟通过从i + 1到n - 1下标的元素
//逐个与i下标元素比较及时交换进行排序。

