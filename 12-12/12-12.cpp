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
//�Ӽ�������n����n��10���������ý������������򣨷ǵݼ����򣩣�
//���������������С�˵���������������ú���ʵ�֣�����ԭ��Ϊ��void sort(int* a, int n); 
//����������Ļ���˼���ǣ�n��Ԫ�ع���Ҫn - 1�ˣ����е�i����0�仯��n - 2��
//�˵��������ҳ���������С��Ԫ�ط����±�Ϊi��λ���ϣ�ÿ��ͨ����i + 1��n - 1�±��Ԫ��
//�����i�±�Ԫ�رȽϼ�ʱ������������

