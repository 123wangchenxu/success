#include<stdio.h>
void shabi(int arr[],int );
int main()
{
	int arr[] = { 9,8,7,6 };
	int sz=sizeof(arr)/sizeof(arr[0]);
	shabi(arr, sz);
	printf("%d", arr[0]);
		return 0;
}
void shabi(int arr[],int sz)
{
	
	
	int i = 0, j = 0;
	for (i = 0; i < sz - 1; i++)
	{for (j = 0; j < sz - 1 - i;j++)
	{
		if (arr[j] > arr[j + 1])
		{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}}
	
}