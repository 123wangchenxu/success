#include<stdio.h>
#include<math.h>
#define score 8
#define ZIFU 1000
#define DENNGBASHU 150

int main()
{
	int add[score], i = 0, ii = 7, iii = 1, mi[score], ki, kii, iiiii;
	float num, red, ret;
	for (i = 0; i < score; i++)
		scanf_s("%d", &add[i]);
	for (ii = 7; ii >= 0; ii--)
	{
		printf("%d", add[ii]);

	}
	printf("请输入一个数字：（请保留一位小数）");

	scanf_s("%f", &num);
	for (iii = 1.0, ret = 0, red = 1.0; iii <= num; iii = iii + 1.0)
	{
		red = pow(-1, iii - 1) * 1.0 / iii;
		ret += red;


	}
	printf("%f", ret);
	for (ki = 0; ki < score; ki++)
	{
		kii = pow(2, ki);
		printf("%d", kii);
	}
	int u = 0, uy = 0;
	double add1[score], add2 = 0, add3[score];

	for (u = 0, add2 = 0; u < score; u++)
	{
		scanf_s("%lf", &add1[u]);
		printf("%lf\n", add1[u]);
		add2 = add2 + add1[u];

		add3[u] = add2;
		printf("%lf", add3[u]);

	}

	int n;
	double Daphne, Deirdre;

	for (n = 1, Daphne = 100, Deirdre = 100; Deirdre <= Daphne; n++)
	{
		Daphne += 100 * 0.1;
		Deirdre += Deirdre * 0.05;
	}
	printf("%d\n", n);
	printf("%lf\n%lf\n", Daphne, Deirdre);
	double k = 1000000;
	int iiiiiii = 1;
	for (k = 1000000, iiiiiii = 1; k > 0; iiiiiii++)
	{
		k += k * 0.08 - 100000;

	}
	printf("%d", iiiiiii);
	int friends = 5, fri = 1,ends;
	for(fri=1,friends=5;friends<DENNGBASHU;fri++)
	{
		friends = (friends - fri)*2;
		printf("%d\n", friends);
		

	}
	

	return 0;
	

}