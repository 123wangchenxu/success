#include<stdio.h>
#define zifu 999

int main()
{
	char arr1[zifu];
	char arr2[zifu];
	char a, b;
	char* cp = arr1;
	char* cpp = arr2;
	int i = 0, j = 0;
	
	
	printf("��������Ҫ��ȡ�ĵ�һ���ַ�����Ϊ�û���");
	while (scanf_s("%c", &a) != 0)
	{
		if (a == '\n')
			break;
		if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		{
			arr1[i] = a;
			i++;
		}
	}
	arr1[i] = '\0';
	
	printf("������ڶ�����Ҫ��ȡ���ַ�����Ϊ����");
	while (scanf_s("%c", &b) != 0)
	{
		if (b == '\n')
			break;
		if (b >= 48 && b <= 57)
		{
			arr2[j] = b;
			j++;
		}
	}
	arr2[j] = '\0';
	int count1 = 0, count2 = 0;
	printf("�û�����");
	while (*cp != '\0')
	{
		count1++;
		if (count1 % 2 == 1)
		{
			printf("%c", *cp);
		}
		cp++;
	}
	printf("\n");
	printf("���룺");
	while (*cpp!= '\0')
	{
		count2++;
		if (count2 % 2 == 0)
		{
			printf("%c", *cpp);
		}
		cpp++;
	}
	return 0;
}


//��д����exp7_2.c������С���С��ͨ�����緢�͵������ַ����У���ȡ�û��������롣
//��ȡ���򣺽���һ���ַ��������еĴ�Сд��ĸ��ԭ�����������ٰ�ԭ��ȡ����λ�����û�����
//���ڶ������������ְ�ԭ�����������ٰ�ԭ��ȡż��λ�������롣
//����С������С��ĵ�һ���ַ���Ϊ��ag13re5D6s789h0R����
//��Դ����С��ĸ����������Ϊ��agreDshR���������û���Ϊ��arDh����
//�ڶ����ַ���Ϊ��UGa4fF6hHt97J89iK5i4L2P3���� ��Դ�����ְ���������Ϊ��4697895423����
//��������Ϊ��67943����

