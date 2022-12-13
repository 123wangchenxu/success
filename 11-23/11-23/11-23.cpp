#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	scanf_s("%lf", &a);
	double d = 3 / log(pow((1 + 1 / a),1/2.0)) - 6 * a;
	printf("%lf", d);
	return 0;
}