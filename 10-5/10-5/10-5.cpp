#include<stdio.h>
int main()
{
	int m, n;
	printf("请输入两个整数:");
	scanf_s("%d%d",&m, &n);
	int ret = 0;
	ret = m * n;
	printf("%d\n", ret);
	printf("how many dogs do you have\n");
	int h;
	scanf_s("%d", &h);
	printf("you have %d dogs\n",h);
	int dogs;
	printf("How many dogs do you have?\n");
	scanf_s("%d", &dogs);
	printf("So you have %d dog(s)!\n", dogs);
	int mi = -3;
	printf("%d", mi);
	
	



	return 0;
}