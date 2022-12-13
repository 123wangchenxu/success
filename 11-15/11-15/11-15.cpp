#include<stdio.h>
int max(int arr[],int n);
int main()
{
	int arr[] = { 38,90,65,57,32,99,204,909,93 };
	int h = sizeof(arr) / sizeof(arr[0]);
	int qii=max(arr, h);
	printf("%d", qii);

	return 0;
}
int max(int arr[],int n)
{
	int i = 0;
	int m = 0;
	for (i = 0; i <n; i++)
	{
		if (arr[i] > arr[i + 1])
			arr[i + 1] = arr[i];

	}
	int qi = arr[n - 1];
	return qi;
}
