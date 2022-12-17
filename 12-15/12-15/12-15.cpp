#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 999
void danci();
int main()
{
	danci();
	
	return 0;
}
void danci()
{
	int a;
	int m = 0;
	int i = 0,j=0;
	int q = 0;
	char c,d;
	int count = 0;
	char ai[max] = " ";
	printf("How many words do you wish to enter ? ");
	scanf_s("%d", &a);
	getchar();
	printf("Enter %d words now :", a);
	char** psd = (char**)malloc(a * sizeof(char*));
	if (psd)
	{
		for (i = 0; i < a; i++)
		{
			count = 0;
			j = 0;
			while (scanf_s("%c", &c) != 0)
			{
				ai[j] = c;
				if (c == ' ' || c == '\n')
					break;
				j++;
				count++;
			}
			count += 1;
			psd[i] = (char*)malloc(count * sizeof(char));
			for (m = j - count + 1; m < j; m++)
			{
				psd[i][m]= ai[m];
			}
			psd[i][m + 1] = '\0';

		}
		for (q = 0; q < a && psd != NULL; q++)
		{
			printf("%s", *(psd+q));
			printf("\n");
		}
	}
}
/*9.编写一个符合以下描述的函数。首先，询问用户需要输入多少个单
词。然后，接收用户输入的单词，并显示出来，使用malloc()并回答第1个问
题（即要输入多少个单词），创建一个动态数组，该数组内含相应的指向
char的指针（注意，由于数组的每个元素都是指向char的指针，所以用于储
存malloc()返回值的指针应该是一个指向指针的指针，且它所指向的指针指
945
向char）。在读取字符串时，该程序应该把单词读入一个临时的char数组，
使用malloc()分配足够的存储空间来储存单词，并把地址存入该指针数组
（该数组中每个元素都是指向 char 的指针）。然后，从临时数组中把单词
拷贝到动态分配的存储空间中。因此，有一个字符指针数组，每个指针都指
向一个对象，该对象的大小正好能容纳被储存的特定单词。下面是该程序的
一个运行示例：
How many words do you wish to enter ? 5
Enter 5 words now :
I enjoyed doing this exerise
Here are your words :
I
enjoyed
doing
this
exercise*/