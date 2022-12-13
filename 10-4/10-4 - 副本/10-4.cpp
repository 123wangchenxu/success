#include<stdio.h>
int main()
{
	int i = 010, j = 10, k = 0x10;
	printf("%d,%d,%d\n", i, j, k);
	int a = 96;
	double x = 12.345;
	char ch = 'A';
	printf("%-4d,%4d\n", a, a);
	printf("%10.2f,%10.2e\n", x, x);
	printf("%c,%c\n", ch, ch + 32);
	
	int m;
	float n, t;
	scanf_s("%3d%3f%4f", &m, &n, &t);
	printf("m=%4d,n=%f,c=%g\n", m, n, t);
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(unsigned int));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	int r, h;
	const float pi = 3.142;
	float s, v;
	

	scanf_s("%d%d", &r, &h);
	s = pi * r * r;
	v = pi * r * r * h;
	printf("%f%f", s, v);
	int gb, gt, gh, gk, gl, gu;

	scanf_s("%6d%4d%2d%2d%3d%2d", &gb,&gt,&gh,&gk,&gl,&gu);
	printf("地址码：");
	printf("%6d\n", gb);
		printf("出生日期：");
		printf("%4d年%2d月%2d日", gt, gh, gk);
		printf("顺序码");
		printf("%003d\n", gl);
		printf("校验码\n：");
		printf("%2d", gu);

	return 0;

}