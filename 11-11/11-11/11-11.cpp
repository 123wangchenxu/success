#include<stdio.h>
void menu();
void game();
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("������һ�����֣������Ƿ�����Ϸ");
		scanf_s("%d", &input);
		switch (input)
		{case 1:
			printf("��ʼ��Ϸ");
			
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("����������");
			break;

		}
	} while (input);
	return 0;
}
void menu()
{
	    printf("***********************************\n");
		printf("***************1������*******************\n");
		printf("***************0���˳�*******************\n");
		printf("***********************************\n");
}
void game()
{}