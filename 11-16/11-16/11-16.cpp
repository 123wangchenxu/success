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
	printf("����3������ÿ��������5��double���͵���\n");
	for (i = 0; i < 3; i++)
	{
		printf("�������%d����", i + 1);
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



/*13.��дһ��������ʾ�û�����3������ÿ��������5��double���͵���
�������û�����ȷ����Ӧ�������������ֵ���ݣ����ó���Ӧ���������

��
a.���û���������ݴ�����3��5��������
b.����ÿ�飨5�������ݵ�ƽ��ֵ
c.�����������ݵ�ƽ��ֵ
d.�ҳ���15�������е����ֵ
e.��ӡ���
ÿ������Ҫ�õ����ĺ�������ɣ�ʹ�ô�ͳC��������ķ�ʽ������
������b��Ҫ��дһ�����㲢����һά����ƽ��ֵ�ĺ���������ѭ�����ø�
����3�Ρ����ڴ�����������ĺ�����Ӧ�ð�����������Ϊ�������������c
��d�ĺ���Ӧ�ѽ����������������*/