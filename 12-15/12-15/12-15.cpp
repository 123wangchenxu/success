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
/*9.��дһ���������������ĺ��������ȣ�ѯ���û���Ҫ������ٸ���
�ʡ�Ȼ�󣬽����û�����ĵ��ʣ�����ʾ������ʹ��malloc()���ش��1����
�⣨��Ҫ������ٸ����ʣ�������һ����̬���飬�������ں���Ӧ��ָ��
char��ָ�루ע�⣬���������ÿ��Ԫ�ض���ָ��char��ָ�룬�������ڴ�
��malloc()����ֵ��ָ��Ӧ����һ��ָ��ָ���ָ�룬������ָ���ָ��ָ
945
��char�����ڶ�ȡ�ַ���ʱ���ó���Ӧ�ðѵ��ʶ���һ����ʱ��char���飬
ʹ��malloc()�����㹻�Ĵ洢�ռ������浥�ʣ����ѵ�ַ�����ָ������
����������ÿ��Ԫ�ض���ָ�� char ��ָ�룩��Ȼ�󣬴���ʱ�����аѵ���
��������̬����Ĵ洢�ռ��С���ˣ���һ���ַ�ָ�����飬ÿ��ָ�붼ָ
��һ�����󣬸ö���Ĵ�С���������ɱ�������ض����ʡ������Ǹó����
һ������ʾ����
How many words do you wish to enter ? 5
Enter 5 words now :
I enjoyed doing this exerise
Here are your words :
I
enjoyed
doing
this
exercise*/