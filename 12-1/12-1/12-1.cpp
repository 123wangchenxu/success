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
	printf("��������ʮ���ַ�����\n");
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
		printf("****************�˵�**************\n");
		printf("1)��ӡԴ�ַ����б�\n2)��ASCII�е�˳���ӡ�ַ���\n3)�����ȵ���˳���ӡ�ַ���\n4)���ַ����е�1�����ʵĳ��ȴ�ӡ�ַ���\n5)�˳�\n");
		printf("���������֣�,��ȷ������ѡ��Ĺ���\n");
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
			printf("����������");
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


//11.��дһ������������10���ַ������߶���EOFʱֹͣ���ó���Ϊ��
//���ṩһ����5��ѡ��Ĳ˵�����ӡԴ�ַ����б���ASCII�е�˳���ӡ��
//�����������ȵ���˳���ӡ�ַ��������ַ����е�1�����ʵĳ��ȴ�ӡ�ַ�
//�����˳����˵�����ѭ����ʾ�������û�ѡ���˳�ѡ���Ȼ���ó���Ҫ��
//������ɲ˵��и�ѡ��Ĺ��ܡ�