#include <stdio.h>
#include <stdlib.h> /* 为 malloc()、free()提供原型 */
int main(void)
{
	
		double* ptd;
	int max;
	int number;
	int i = 0;
	puts("What is the maximum number of type double entries?");
	if (scanf_s("%d", &max) != 1)
	{
		puts("Number not correctly entered -- bye.");
		exit(EXIT_FAILURE);
	}
	ptd = (double*)malloc(max * sizeof(double));
	if (ptd == NULL)
	{
		puts("Memory allocation failed. Goodbye.");
		exit(EXIT_FAILURE);
	}
	/* ptd 现在指向有max个元素的数组 */
	puts("Enter the values (q to quit):");
	while (i < max && scanf_s("%lf", &ptd[i]) == 1)
	
		++i;
	printf("Here are your %d entries:\n", number = i);
	for (i = 0; i < number; i++)
	{
		printf("%7.2f ", ptd[i]);
		if (i % 7 == 6)
			putchar('\n');
	}
	if (i % 7 != 0)
		putchar('\n');
	puts("Done.");
	free(ptd);
	return 0;
}