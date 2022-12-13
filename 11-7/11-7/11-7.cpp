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



//2.设计一个函数chline(ch, i, j)，打印指定的字符j行i列。在一个简单的驱
//动程序中测试该函数。
//3.编写一个函数，接受3个参数：一个字符和两个整数。字符参数是待
//打印的字符，第1个整数指定一行中打印字符的次数，第2个整数指定打印指
//定字符的行数。编写一个调用该函数的程序。
//4.两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数
//的平均值，最后取计算结果的倒数。编写一个函数，接受两个double类型的
//参数，返回这两个参数的调和平均数。
//5.编写并测试一个函数larger_of()，该函数把两个double类型变量的值替
//换为较大的值。例如， larger_of(x, y)会把x和y中较大的值重新赋给两个变
//量。