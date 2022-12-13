#include<stdio.h>
#include<ctype.h>
#define zifu 999
#define duanzifu 6
char* duqu(char*);

int main()
{
	char arr[zifu];
	printf("ÇëÊäÈë£º\n");
	while (1)
	{
		char arr[zifu] = "";
		duqu(arr);
		if (arr[0] == '\n')
			break;
		else
			puts(arr);
		printf("Çë¼ÌĞøÊäÈë£º\n");
			
	}
	
	return 0;
}
char* duqu(char*arr)
{
	int i = 0;
	char* cp = arr;
	char a;
	while ((scanf_s("%c", &a)) != 0)
	{
		if (a == ' ')
			continue;
		
		arr[i] = a;
		if (a == '\n')
			break;
		i++;
	}
	arr[i+1] = '\0';
	return arr;

}

