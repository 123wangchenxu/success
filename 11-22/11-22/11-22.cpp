#include<stdio.h>

#define zifu 5
#define dazifu 10
 char* string_in( char*, char*);
int main()
{
	char arr1[dazifu];
	char arr2[zifu];
	char* pi = string_in(arr1,arr2);
	printf("%c", *pi);
	return 0;
}
char* string_in(char*arr1, char*arr2)
{
	int i = 0;
	int j = 0;
	char a, b;
	while ((scanf_s("%c", &a)) != 0)
	{
		arr1[i] = a;
		if (i == dazifu - 1)
		{
			arr1[i] = '\0';
			break;
		}
			i++;
	}
	while ((scanf_s("%c", &b)) != 0)
	{
		arr2[j] = b;
		if (j == dazifu - 1)
		{
			arr2[j] = '\0';
			break;
		}
		j++;
	}
	int ii = 0;
	int jj = 0;
	
	
	int d = 0;
	for(jj=0;arr2[jj]!='\0';jj++)
	{
		for (ii= 0; arr1[ii] != '\0'; ii++)
		{
			if (arr2[jj] == arr1[ii])
			{
				for (; jj < zifu - 1; ii++, jj++)
				{
					if (arr2[jj] = arr1[ii])
						d++;
				}
				
			}

			
		}
	}
	if (d == zifu - 1)
		return &arr1[i] - 4;
	return NULL;
}




//8.��дһ����Ϊstring_in()�ĺ�������������ָ���ַ�����ָ����Ϊ��
//���������2���ַ����а�����1���ַ������ú��������ص�1���ַ�����ʼ
//�ĵ�ַ�����磬string_in("hats", "at")������hats��a�ĵ�ַ�����򣬸ú�����
//�ؿ�ָ�롣��һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����
//ֵ��