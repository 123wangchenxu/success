#include<stdio.h>
#include<string.h>
#include<math.h>
int rotate_1(int, int);

int main()
{
	int a, b;
	printf("������ֵ��Ҫ�ƶ���λ�ã�");
	scanf_s("%d%d", &a, &b);
	printf("%d", rotate_1(a, b));
	return 0;
}
int rotate_1(int x, int m)
{
	int a[99] = { 0 };
	int b[99] = { 0 };
	int d = 0;
	int ci = 0;
	int di = m;
	int i = 0;
	int j = 0;
	int q = m;
	int temp = 0;
	int ret = 0;
	while (x != 0)
	{
		a[i] = x % 2;
		x /= 2;
		i++;
	}
	for (j = 0; j <= (i -1)/ 2; j++)
	{
		temp = a[i - 1 - j];
		a[i - 1 - j] = a[j];
		a[j] = temp;
	}
	for (q = m; q < i; q++)
	{
		b[q - m] = a[q];
	}
	for (d = 0; d <= m; d++,di--)
	{
		b[i - di] = a[d];
	}
	for (ci = 0; ci < i; ci++)
	{
		ret += pow(2, i - ci-1) * b[ci];
	}
	return ret;
}
//5.��дһ����������һ�� unsigned int ����ֵ�е�����λ������תָ����
//����λ�����磬rotate_l(x, 4)��x������λ�����ƶ�4��λ�ã����Ҵ������
//�Ƴ���λ�����³������Ҷˡ�Ҳ����˵���Ѹ߽�λ�Ƴ���λ����ͽ�λ����
//һ�������в��Ըú�����