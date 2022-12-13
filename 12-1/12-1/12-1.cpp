#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define zifu 999
void duqu(char arr[10][zifu]);
void shunxu(char arr[10][zifu]);
void changdu(char arr[10][zifu]);
void danci(char arr[10][zifu]);
int jishu(char*arr)
{
	int i = 0;
	int count = 0;
	for (i = 0;; i++)
	{
		if (arr[i] == ' ' || arr[i] == '\0')
			break;
		count++;
	}
	return count;
}

int main()
{
	int s = 0;
	char arr[10][zifu];
	printf("请先输入十个字符串：\n");
	char a;
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (scanf_s("%c", &a) != 0 && a != EOF)
		{
			arr[i][j] = a;

			if (a == '\n')
				break;
			j++;
		}
		arr[i][j] = '\0';
	}
	while (s!=5)
	{
		printf("****************菜单**************\n");
		printf("1)打印源字符串列表\n2)以ASCII中的顺序打印字符串\n3)按长度递增顺序打印字符串\n4)按字符串中第1个单词的长度打印字符串\n5)退出\n");
		printf("请输入数字：,以确定你想选择的功能\n");
		scanf_s("%d", &s);
		switch (s)
		{case 1:
			duqu(arr);
			break;
		case 2:
			shunxu(arr);
			break;
		case 3:
			changdu(arr);
			break;
		case 4:
			danci(arr);
			break;
		case 5:
			break;
		default:
			printf("请重新输入");
				break;

		}
	}
	return 0;
}
void duqu(char arr[10][zifu])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%s", arr[i]);
		printf("\n");
	}
}
void shunxu(char arr[10][zifu])
{
	int i = 0;
	int j = 0;
	int ii = 0;
	int q = 0;
	int h = 0;
	char *arr1[10];
	char* temp;
	
	for (i = 0; i < 10; i++)
	{
		arr1[i] = arr[i];
	}
	for (j = 0; j < 10; j++)
	{
		for (q = 0,h=0; q < 10 - j - 1; q++,h++)
		{
			if (*arr1[h]<*arr1[h+1])
			{
				temp=arr1[h];
				arr1[h] = arr1[h + 1];
				arr1[h + 1] = temp;

			}
		}
	}
	for (ii = 0; ii < 10; ii++)
	{
		printf("%s", arr1[ii]);
		printf("\n");
	}
}
void changdu(char arr[10][zifu])
{
	
	int i = 0;
	int j = 0;
	int ii = 0;
	int q = 0;
	int h = 0;
	char* arr1[10];
	char* temp;

	for (i = 0; i < 10; i++)
	{
		arr1[i] = arr[i];
	}
	for (j = 0; j < 10; j++)
	{
		for (q = 0, h = 0; q < 10 - j - 1; q++, h++)
		{
			if (strlen(arr1[h]) > strlen(arr1[h + 1]))
			{
				temp = arr1[h];
				arr1[h] = arr1[h + 1];
				arr1[h + 1] = temp;

			}
		}
	}
	for (ii = 0; ii < 10; ii++)
	{
		printf("%s", arr1[ii]);
		printf("\n");
	}
}
void danci(char arr[10][zifu])
{
	int iii = 0;
	int count[10] = { 0 };
	int jjj = 0;
	for (iii = 0; iii < 10; iii++)
	{
		for (jjj = 0; ; jjj++)
		{
			if (arr[iii][jjj] == '\0' || arr[iii][jjj] == ' ')
				break;
			(count[iii])++;
			
		}
	}
	int i = 0;
	int j = 0;
	int ii = 0;
	int q = 0;
	int h = 0;
	char* arr1[10];
	char* temp;

	for (i = 0; i < 10; i++)
	{
		arr1[i] = arr[i];
	}
	for (j = 0; j < 10; j++)
	{
		for (q = 0, h = 0; q < 10 - j - 1; q++, h++)
		{
			if (jishu(arr1[h]) > jishu(arr1[h+1]))
			{
				temp = arr1[h];
				arr1[h] = arr1[h + 1];
				arr1[h + 1] = temp;

			}
		}
	}
	for (ii = 0; ii < 10; ii++)
	{
		printf("%s", arr1[ii]);
		printf("\n");
	}

}


//11.编写一个函数，读入10个字符串或者读到EOF时停止。该程序为用
//户提供一个有5个选项的菜单：打印源字符串列表、以ASCII中的顺序打印字
//符串、按长度递增顺序打印字符串、按字符串中第1个单词的长度打印字符
//串、退出。菜单可以循环显示，除非用户选择退出选项。当然，该程序要能
//真正完成菜单中各选项的功能。