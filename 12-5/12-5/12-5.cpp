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
	
	
	printf("请输入需要提取的第一个字符串作为用户名");
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
	
	printf("请输入第二个需要提取的字符串作为密码");
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
	printf("用户名：");
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
	printf("密码：");
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


//编写程序exp7_2.c，帮助小红从小明通过网络发送的两串字符串中，提取用户名和密码。
//提取规则：将第一串字符串中所有的大小写字母按原序连起来，再按原序取奇数位就是用户名；
//将第二串中所有数字按原序连起来，再按原序取偶数位就是密码。
//例：小明发给小红的第一个字符串为“ag13re5D6s789h0R”，
//则源串大小字母按序连起来为“agreDshR”，所以用户名为“arDh”；
//第二个字符串为“UGa4fF6hHt97J89iK5i4L2P3”， 则源串数字按序连起来为“4697895423”，
//所以密码为“67943”。

