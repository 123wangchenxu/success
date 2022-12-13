#include<stdio.h>
int main()
{
	printf("%d\n", 010 + 10);
	printf("%o\n", 010 + 10);
	printf("%x\n", 010 + 10);
	getchar();
	printf("%c\t%c\n", 'A', 'a');
	printf("%d\t%d\n", 'A', 'a');
	printf("%c\t%c\n", 'A', 'A' + 32);

	printf("%d\t%d\n", '0', 0);
	printf("%c\n", 0 + 48);
	float weight;
	float value;

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	scanf_s("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $ %.2f\n", value);
	printf("You are easily worth that! If platinum prices drop,eat more to maintain your value.");
	getchar();
	getchar();
	int z, a = 0;
	z = 0 || a++;
	printf("%d,%d", z, a);

	return 0;
}