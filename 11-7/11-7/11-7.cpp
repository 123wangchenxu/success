#include<stdio.h>
#include<math.h>
void larger_of(double, double,double);

int main()
{
	double m, n,p;
	scanf_s("%lf%lf", &m, &n);
	larger_of(m, n,p);
	printf("%lf%lf", m, n);
	/*double m, n, p;
	scanf_s("%lf%lf", &m, &n);
	p=arrange(m, n);
	printf("%lf", p);
	/*char ch = '!';
	int m = 0;
	int n = 0;
	beach(ch, m, n);
	/*double q, c, h;
	scanf_s("%lf%lf",& q, &c);
	h = (min(q, c));
	printf("%lf", h);
	char ch[200][200];
		int i, j;
		scanf_s("%d%d", &j, &i);
		scanf_s("%s", &ch, 200,200);
		chline(ch[200][200], i, j);*/
	

	return 0;
	
	
}
void larger_of(double m, double n,double)
{
	double ci = m > n ? m : n;
	m = ci;
	n = ci;

}



//2.���һ������chline(ch, i, j)����ӡָ�����ַ�j��i�С���һ���򵥵���
//�������в��Ըú�����
//3.��дһ������������3��������һ���ַ��������������ַ������Ǵ�
//��ӡ���ַ�����1������ָ��һ���д�ӡ�ַ��Ĵ�������2������ָ����ӡָ
//���ַ�����������дһ�����øú����ĳ���
//4.�����ĵ���ƽ�����������㣺�ȵõ������ĵ�����Ȼ�������������
//��ƽ��ֵ�����ȡ�������ĵ�������дһ����������������double���͵�
//���������������������ĵ���ƽ������
//5.��д������һ������larger_of()���ú���������double���ͱ�����ֵ��
//��Ϊ�ϴ��ֵ�����磬 larger_of(x, y)���x��y�нϴ��ֵ���¸���������
//����