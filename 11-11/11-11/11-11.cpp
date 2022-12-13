#include<stdio.h>
void menu();
void game();
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入一个数字，决定是否玩游戏");
		scanf_s("%d", &input);
		switch (input)
		{case 1:
			printf("开始游戏");
			
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("请重新输入");
			break;

		}
	} while (input);
	return 0;
}
void menu()
{
	    printf("***********************************\n");
		printf("***************1、继续*******************\n");
		printf("***************0、退出*******************\n");
		printf("***********************************\n");
}
void game()
{}